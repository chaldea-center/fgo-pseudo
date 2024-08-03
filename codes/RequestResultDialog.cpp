void __fastcall RequestResultDialog___ctor(RequestResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49F88D3 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F88D3 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RequestResultDialog__CallOnClose(RequestResultDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *onClose; // x19
  ServantStatusBattleListViewItem_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (ServantStatusBattleListViewItem_o *)&this->fields.onClose;
    p_onClose->klass = 0LL;
    sub_1B6406C(p_onClose, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClose->fields.m_target)(
      onClose->fields.original_method_info,
      *(_QWORD *)&onClose->fields.extra_arg);
  }
}


void __fastcall RequestResultDialog__CallOnDecide(RequestResultDialog_o *this, bool isOk, const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_Action_bool__o *onDecide; // x20
  ServantStatusBattleListViewItem_o *p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = (ServantStatusBattleListViewItem_o *)&this->fields.onDecide;
    p_onDecide->klass = 0LL;
    sub_1B6406C(p_onDecide, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      isOk,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall RequestResultDialog__Close(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RequestResultDialog__Close_32382228(this, 0LL, v2);
}


void __fastcall RequestResultDialog__Close_32382228(
        RequestResultDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49F88CA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_RequestResultDialog_EndClose__, v6);
    byte_49F88CA = 1;
  }
  this->fields.onClose = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_RequestResultDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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

  if ( (byte_49F88C9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F88C9 = 1;
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
      sub_1B64324(0LL);
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
  if ( (byte_49F88C4 & 1) == 0 )
  {
    this = (RequestResultDialog_o *)sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F88C4 = 1;
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
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)v3, 0LL);
}


void __fastcall RequestResultDialog__OnClickCancel(RequestResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49F88CD & 1) == 0 )
  {
    sub_1B640C8(&Method_RequestResultDialog_OnClickCancel__, method);
    byte_49F88CD = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RequestResultDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_RequestResultDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    RequestResultDialog__CallOnDecide(this, 0, v5);
  }
}


void __fastcall RequestResultDialog__OnClickDecide(RequestResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49F88CC & 1) == 0 )
  {
    sub_1B640C8(&Method_RequestResultDialog_OnClickDecide__, method);
    byte_49F88CC = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RequestResultDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_RequestResultDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    RequestResultDialog__CallOnDecide(this, 1, v5);
  }
}


void __fastcall RequestResultDialog__OnClickOk(RequestResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49F88CB & 1) == 0 )
  {
    sub_1B640C8(&Method_RequestResultDialog_OnClickOk__, method);
    byte_49F88CB = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RequestResultDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_RequestResultDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_49F88C5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, message);
    byte_49F88C5 = 1;
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
  UnityEngine_GameObject_o *normalBuyWindowObj; // x8
  int32_t v18; // w2
  int32_t v19; // w3
  char v20; // w24
  char v21; // w24
  RequestResultDialog_o *v22; // x0
  const MethodInfo *v23; // x4
  int32_t v24; // w3
  RequestResultDialog_o *v25; // x0
  const MethodInfo *v26; // x3
  RequestResultDialog_o *v27; // x0
  const MethodInfo *v28; // x3
  RequestResultDialog_o *v29; // x0
  const MethodInfo *v30; // x3
  UILabel_o **p_addMessage2Label; // x8
  RequestResultDialog_o *v32; // x0
  const MethodInfo *v33; // x3
  RequestResultDialog_o *v34; // x0
  const MethodInfo *v35; // x3
  RequestResultDialog_o *v36; // x0
  const MethodInfo *v37; // x3
  UILabel_o *okBtnLabel; // x20
  RequestResultDialog_o *v39; // x0
  const MethodInfo *v40; // x3
  RequestResultDialog_o *TargetPanel; // x0
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  __int64 v44; // x2
  System_Action_o *v45; // x20

  if ( (byte_49F88C6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, message);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&Method_RequestResultDialog_EndOpen__, v14);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v15);
    byte_49F88C6 = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)onDecide, v18, v19);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0LL);
  if ( !this->fields.itemBuyWindowObj )
    goto LABEL_20;
  v20 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.itemBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0LL);
  KeepPanelDepth = this->fields.itemBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  v21 = ~v20;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, v21 & 1, 0LL);
  if ( (v21 & 1) != 0 )
  {
    RequestResultDialog__SetLabelFontSizeAdjust(v22, this->fields.itemMessage2Label, message, 30, v23);
    RequestResultDialog__SetLabelText(v32, this->fields.itemMessage2Label, message, v33);
    RequestResultDialog__SetLabelText(v34, this->fields.numMessage2Label, numMessage, v35);
    RequestResultDialog__SetLabelText(v36, this->fields.userItemNum2Label, userItemNumMessage, v37);
    p_addMessage2Label = &this->fields.addMessage2Label;
    userItemNumMessage = addMessage;
  }
  else
  {
    v24 = this->fields.itemMessageLabelOverwriteFontSize <= 0 ? 30 : this->fields.itemMessageLabelOverwriteFontSize;
    RequestResultDialog__SetLabelFontSizeAdjust(v22, this->fields.itemMessageLabel, message, v24, v23);
    RequestResultDialog__SetLabelText(v25, this->fields.itemMessageLabel, message, v26);
    RequestResultDialog__SetLabelText(v27, this->fields.numMessageLabel, numMessage, v28);
    p_addMessage2Label = &this->fields.userItemNumLabel;
  }
  RequestResultDialog__SetLabelText(v29, *p_addMessage2Label, userItemNumMessage, v30);
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
  v39 = (RequestResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  RequestResultDialog__SetLabelText(v39, okBtnLabel, (System_String_o *)v39, v40);
  TargetPanel = (RequestResultDialog_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  RequestResultDialog__SetPanelDepth(TargetPanel, (UIPanel_o *)TargetPanel, this->fields.keepPanelDepth, v42);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    0LL,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
  KeepPanelDepth = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !KeepPanelDepth )
LABEL_20:
    sub_1B64324(KeepPanelDepth);
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
  this->fields.isButtonEnable = 0;
  v45 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v43, v44);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0LL);
}


void __fastcall RequestResultDialog__OpenAddMsg_32381212(
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
  UnityEngine_GameObject_o *itemBuyWindowObj; // x8
  int32_t v27; // w2
  int32_t v28; // w3
  char v29; // w28
  char v30; // w28
  RequestResultDialog_o *v31; // x0
  const MethodInfo *v32; // x3
  System_String_o *v33; // x2
  RequestResultDialog_o *v34; // x0
  const MethodInfo *v35; // x4
  RequestResultDialog_o *v36; // x0
  const MethodInfo *v37; // x3
  RequestResultDialog_o *v38; // x0
  const MethodInfo *v39; // x4
  RequestResultDialog_o *v40; // x0
  const MethodInfo *v41; // x3
  RequestResultDialog_o *v42; // x0
  const MethodInfo *v43; // x2
  RequestResultDialog_o *v44; // x0
  const MethodInfo *v45; // x4
  RequestResultDialog_o *v46; // x0
  const MethodInfo *v47; // x3
  RequestResultDialog_o *v48; // x0
  const MethodInfo *v49; // x2
  struct UILabel_o *okBtnLabel; // x21
  RequestResultDialog_o *v51; // x0
  const MethodInfo *v52; // x3
  UILabel_o *decideButtonLabel; // x1
  System_String_o *v54; // x2
  RequestResultDialog_o *v55; // x0
  const MethodInfo *v56; // x3
  RequestResultDialog_o *TargetPanel; // x0
  const MethodInfo *v58; // x3
  __int64 v59; // x1
  __int64 v60; // x2
  System_Action_o *v61; // x20

  if ( (byte_49F88C8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, title);
    sub_1B640C8(&LocalizationManager_TypeInfo, v20);
    sub_1B640C8(&Method_RequestResultDialog_EndOpen__, v21);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v22);
    sub_1B640C8(&StringLiteral_1/*""*/, v23);
    byte_49F88C8 = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)onDecide, v27, v28);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0LL);
  if ( !this->fields.normalBuyWindowObj )
    goto LABEL_27;
  v29 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.normalBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0LL);
  KeepPanelDepth = this->fields.normalBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_27;
  v30 = ~v29;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, v30 & 1, 0LL);
  v33 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
  if ( (v30 & 1) != 0 )
  {
    RequestResultDialog__SetLabelText(v31, this->fields.title2Label, v33, v32);
    RequestResultDialog__SetLabelFontSizeAdjust(v38, this->fields.message2Label, message, fontSize, v39);
    RequestResultDialog__SetLabelText(v40, this->fields.message2Label, message, v41);
    RequestResultDialog__SetLabelLacalPositionY(v42, this->fields.message2Label, (float)message2Y, v43);
    RequestResultDialog__SetLabelFontSizeAdjust(v44, this->fields.addMessageLabel, message, fontSize, v45);
    RequestResultDialog__SetLabelText(v46, this->fields.addMessageLabel, addMessage, v47);
    RequestResultDialog__SetLabelLacalPositionY(v48, this->fields.addMessageLabel, (float)addMessageY, v49);
  }
  else
  {
    RequestResultDialog__SetLabelText(v31, this->fields.titleLabel, v33, v32);
    RequestResultDialog__SetLabelFontSizeAdjust(v34, this->fields.messageLabel, message, fontSize, v35);
    RequestResultDialog__SetLabelText(v36, this->fields.messageLabel, message, v37);
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
        RequestResultDialog__SetLabelText(v55, this->fields.cancelButtonLabel, cancelMessage, v56);
        decideButtonLabel = this->fields.decideButtonLabel;
        v54 = decideMessage;
        goto LABEL_23;
      }
    }
LABEL_27:
    sub_1B64324(KeepPanelDepth);
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
  v51 = (RequestResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  decideButtonLabel = okBtnLabel;
  v54 = (System_String_o *)v51;
LABEL_23:
  RequestResultDialog__SetLabelText(v51, decideButtonLabel, v54, v52);
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
  RequestResultDialog__SetPanelDepth(TargetPanel, (UIPanel_o *)TargetPanel, panelDepth, v58);
  this->fields.isButtonEnable = 0;
  v61 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v59, v60);
  System_Action___ctor(v61, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0LL);
}


void __fastcall RequestResultDialog__Open_32381060(
        RequestResultDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_bool__o *onDecide,
        int32_t panelDepth,
        const MethodInfo *method)
{
  const MethodInfo *v11; // [xsp+18h] [xbp-48h]

  if ( (byte_49F88C7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, title);
    byte_49F88C7 = 1;
  }
  RequestResultDialog__OpenAddMsg_32381212(
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
  if ( (byte_49F88CF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, label);
    byte_49F88CF = 1;
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
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F88D1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, label);
    byte_49F88D1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1B64324(v6);
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

  if ( (byte_49F88CE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, label);
    byte_49F88CE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1B64324(v6);
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

  if ( (byte_49F88D0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, panel);
    byte_49F88D0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)panel, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !panel )
      sub_1B64324(v6);
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

  if ( (byte_49F88D2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15573/*"Window/CancelButton"*/, method);
    sub_1B640C8(&StringLiteral_15584/*"Window/OkBtn"*/, v3);
    byte_49F88D2 = 1;
  }
  cancelButtonObj = this->fields.cancelButtonObj;
  if ( !cancelButtonObj )
    sub_1B64324(0LL);
  if ( UnityEngine_GameObject__get_activeInHierarchy(cancelButtonObj, 0LL) )
    v5 = &StringLiteral_15573/*"Window/CancelButton"*/;
  else
    v5 = &StringLiteral_15584/*"Window/OkBtn"*/;
  return (System_String_o *)*v5;
}