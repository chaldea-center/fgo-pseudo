void __fastcall RequestResultDialog___ctor(RequestResultDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC592 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC592 = 1;
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
    sub_B5D560(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onClose, 0LL);
  }
}


void __fastcall RequestResultDialog__CallOnDecide(RequestResultDialog_o *this, bool isOk, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_bool__o *onDecide; // x20

  if ( (byte_42EC58C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__Invoke__, isOk, (_DWORD)method, v3);
    byte_42EC58C = 1;
  }
  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_bool___Invoke(onDecide, isOk, (const MethodInfo_25873EC *)Method_System_Action_bool__Invoke__);
  }
}


void __fastcall RequestResultDialog__Close(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RequestResultDialog__Close_32370832(this, 0LL, v2);
}


void __fastcall RequestResultDialog__Close_32370832(
        RequestResultDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EC588 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_RequestResultDialog_EndClose__, v10, v11, v12);
    byte_42EC588 = 1;
  }
  this->fields.onClose = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_RequestResultDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *TargetPanel; // x20
  UIPanel_o *v6; // x0
  __int64 v7; // x1
  int32_t *p_keepPanelDepth; // x8

  if ( (byte_42EC587 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC587 = 1;
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
    v6 = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
    if ( !v6 )
      sub_B5D69C(0LL, v7);
    p_keepPanelDepth = &v6->fields.mDepth;
  }
  return *p_keepPanelDepth;
}


void __fastcall RequestResultDialog__Init(RequestResultDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  if ( (byte_42EC582 & 1) == 0 )
  {
    this = (RequestResultDialog_o *)sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EC582 = 1;
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
    sub_B5D69C(0LL, v18);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)v4, 0LL);
}


void __fastcall RequestResultDialog__OnClickCancel(RequestResultDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EC58B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC58B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    RequestResultDialog__CallOnDecide(this, 0, v5);
  }
}


void __fastcall RequestResultDialog__OnClickDecide(RequestResultDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EC58A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC58A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    RequestResultDialog__CallOnDecide(this, 1, v5);
  }
}


void __fastcall RequestResultDialog__OnClickOk(RequestResultDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EC589 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC589 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
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

  if ( (byte_42EC583 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)message, (_DWORD)numMessage, userItemNumMessage);
    byte_42EC583 = 1;
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UnityEngine_GameObject_o *KeepPanelDepth; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *normalBuyWindowObj; // x8
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  char v31; // w24
  char v32; // w24
  RequestResultDialog_o *v33; // x0
  const MethodInfo *v34; // x4
  int32_t v35; // w3
  RequestResultDialog_o *v36; // x0
  const MethodInfo *v37; // x3
  RequestResultDialog_o *v38; // x0
  const MethodInfo *v39; // x3
  RequestResultDialog_o *v40; // x0
  const MethodInfo *v41; // x3
  UILabel_o *addMessage2Label; // x1
  System_String_o *v43; // x2
  RequestResultDialog_o *v44; // x0
  const MethodInfo *v45; // x3
  RequestResultDialog_o *v46; // x0
  const MethodInfo *v47; // x3
  RequestResultDialog_o *v48; // x0
  const MethodInfo *v49; // x3
  UILabel_o *okBtnLabel; // x20
  System_String_o *v51; // x0
  const MethodInfo *v52; // x3
  UIPanel_o *TargetPanel; // x0
  const MethodInfo *v54; // x3
  System_Action_o *v55; // x20

  if ( (byte_42EC584 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)message, (_DWORD)numMessage, userItemNumMessage);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_RequestResultDialog_EndOpen__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v19, v20, v21);
    byte_42EC584 = 1;
  }
  KeepPanelDepth = (UnityEngine_GameObject_o *)RequestResultDialog__GetKeepPanelDepth(this, (const MethodInfo *)message);
  normalBuyWindowObj = this->fields.normalBuyWindowObj;
  this->fields.keepPanelDepth = (int)KeepPanelDepth;
  if ( !normalBuyWindowObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(normalBuyWindowObj, 0, 0LL);
  KeepPanelDepth = this->fields.normalBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
  this->fields.onDecide = onDecide;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onDecide,
    (System_Int32_array **)onDecide,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0LL);
  if ( !this->fields.itemBuyWindowObj )
    goto LABEL_21;
  v31 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.itemBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0LL);
  KeepPanelDepth = this->fields.itemBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_21;
  v32 = ~v31;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, v32 & 1, 0LL);
  if ( (v32 & 1) != 0 )
  {
    RequestResultDialog__SetLabelFontSizeAdjust(v33, this->fields.itemMessage2Label, message, 30, v34);
    RequestResultDialog__SetLabelText(v44, this->fields.itemMessage2Label, message, v45);
    RequestResultDialog__SetLabelText(v46, this->fields.numMessage2Label, numMessage, v47);
    RequestResultDialog__SetLabelText(v48, this->fields.userItemNum2Label, userItemNumMessage, v49);
    addMessage2Label = this->fields.addMessage2Label;
    v43 = addMessage;
  }
  else
  {
    v35 = this->fields.itemMessageLabelOverwriteFontSize <= 0 ? 30 : this->fields.itemMessageLabelOverwriteFontSize;
    RequestResultDialog__SetLabelFontSizeAdjust(v33, this->fields.itemMessageLabel, message, v35, v34);
    RequestResultDialog__SetLabelText(v36, this->fields.itemMessageLabel, message, v37);
    RequestResultDialog__SetLabelText(v38, this->fields.numMessageLabel, numMessage, v39);
    addMessage2Label = this->fields.userItemNumLabel;
    v43 = userItemNumMessage;
  }
  RequestResultDialog__SetLabelText(v40, addMessage2Label, v43, v41);
  KeepPanelDepth = this->fields.okBtnObj;
  if ( !KeepPanelDepth )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
  KeepPanelDepth = this->fields.cancelButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
  KeepPanelDepth = this->fields.decideButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
  okBtnLabel = this->fields.okBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  RequestResultDialog__SetLabelText((RequestResultDialog_o *)v51, okBtnLabel, v51, v52);
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  RequestResultDialog__SetPanelDepth(
    (RequestResultDialog_o *)TargetPanel,
    TargetPanel,
    this->fields.keepPanelDepth,
    v54);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    0LL,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
  KeepPanelDepth = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !KeepPanelDepth )
LABEL_21:
    sub_B5D69C(KeepPanelDepth, v23);
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
  this->fields.isButtonEnable = 0;
  v55 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0LL);
}


void __fastcall RequestResultDialog__OpenAddMsg_32369788(
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  const MethodInfo *v31; // x1
  UnityEngine_GameObject_o *KeepPanelDepth; // x0
  __int64 v33; // x1
  UnityEngine_GameObject_o *itemBuyWindowObj; // x8
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  char v41; // w28
  RequestResultDialog_o *v42; // x0
  const MethodInfo *v43; // x3
  System_String_o *v44; // x2
  RequestResultDialog_o *v45; // x0
  const MethodInfo *v46; // x4
  RequestResultDialog_o *v47; // x0
  const MethodInfo *v48; // x3
  RequestResultDialog_o *v49; // x0
  const MethodInfo *v50; // x4
  RequestResultDialog_o *v51; // x0
  const MethodInfo *v52; // x3
  RequestResultDialog_o *v53; // x0
  const MethodInfo *v54; // x2
  RequestResultDialog_o *v55; // x0
  const MethodInfo *v56; // x4
  RequestResultDialog_o *v57; // x0
  const MethodInfo *v58; // x3
  RequestResultDialog_o *v59; // x0
  const MethodInfo *v60; // x2
  struct UILabel_o *okBtnLabel; // x21
  System_String_o *v62; // x0
  const MethodInfo *v63; // x3
  UILabel_o *decideButtonLabel; // x1
  System_String_o *v65; // x2
  RequestResultDialog_o *v66; // x0
  const MethodInfo *v67; // x3
  UIPanel_o *TargetPanel; // x0
  const MethodInfo *v69; // x3
  System_Action_o *v70; // x20

  if ( (byte_42EC586 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)message, addMessage);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_RequestResultDialog_EndOpen__, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    byte_42EC586 = 1;
  }
  BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  KeepPanelDepth = (UnityEngine_GameObject_o *)RequestResultDialog__GetKeepPanelDepth(this, v31);
  itemBuyWindowObj = this->fields.itemBuyWindowObj;
  this->fields.keepPanelDepth = (int)KeepPanelDepth;
  if ( !itemBuyWindowObj )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(itemBuyWindowObj, 0, 0LL);
  KeepPanelDepth = this->fields.itemBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
  this->fields.onDecide = onDecide;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onDecide,
    (System_Int32_array **)onDecide,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0LL);
  if ( !this->fields.normalBuyWindowObj )
    goto LABEL_28;
  v41 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.normalBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0LL);
  KeepPanelDepth = this->fields.normalBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, (v41 & 1) == 0, 0LL);
  v44 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
  if ( (v41 & 1) != 0 )
  {
    RequestResultDialog__SetLabelText(v42, this->fields.titleLabel, v44, v43);
    RequestResultDialog__SetLabelFontSizeAdjust(v45, this->fields.messageLabel, message, fontSize, v46);
    RequestResultDialog__SetLabelText(v47, this->fields.messageLabel, message, v48);
  }
  else
  {
    RequestResultDialog__SetLabelText(v42, this->fields.title2Label, v44, v43);
    RequestResultDialog__SetLabelFontSizeAdjust(v49, this->fields.message2Label, message, fontSize, v50);
    RequestResultDialog__SetLabelText(v51, this->fields.message2Label, message, v52);
    RequestResultDialog__SetLabelLacalPositionY(v53, this->fields.message2Label, (float)message2Y, v54);
    RequestResultDialog__SetLabelFontSizeAdjust(v55, this->fields.addMessageLabel, message, fontSize, v56);
    RequestResultDialog__SetLabelText(v57, this->fields.addMessageLabel, addMessage, v58);
    RequestResultDialog__SetLabelLacalPositionY(v59, this->fields.addMessageLabel, (float)addMessageY, v60);
  }
  KeepPanelDepth = this->fields.okBtnObj;
  if ( !KeepPanelDepth )
    goto LABEL_28;
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
        RequestResultDialog__SetLabelText(v66, this->fields.cancelButtonLabel, cancelMessage, v67);
        decideButtonLabel = this->fields.decideButtonLabel;
        v65 = decideMessage;
        goto LABEL_24;
      }
    }
LABEL_28:
    sub_B5D69C(KeepPanelDepth, v33);
  }
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
  KeepPanelDepth = this->fields.cancelButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
  KeepPanelDepth = this->fields.decideButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
  okBtnLabel = this->fields.okBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  decideButtonLabel = okBtnLabel;
  v65 = v62;
LABEL_24:
  RequestResultDialog__SetLabelText((RequestResultDialog_o *)v62, decideButtonLabel, v65, v63);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    0LL,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
  KeepPanelDepth = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !KeepPanelDepth )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( (panelDepth & 0x80000000) != 0 )
    panelDepth = this->fields.keepPanelDepth;
  RequestResultDialog__SetPanelDepth((RequestResultDialog_o *)TargetPanel, TargetPanel, panelDepth, v69);
  this->fields.isButtonEnable = 0;
  v70 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v70, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
}


void __fastcall RequestResultDialog__Open_32369632(
        RequestResultDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_bool__o *onDecide,
        int32_t panelDepth,
        const MethodInfo *method)
{
  const MethodInfo *v11; // [xsp+18h] [xbp-38h]

  if ( (byte_42EC585 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)title, (_DWORD)message, onDecide);
    byte_42EC585 = 1;
  }
  RequestResultDialog__OpenAddMsg_32369788(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall RequestResultDialog__SetLabelFontSizeAdjust(
        RequestResultDialog_o *this,
        UILabel_o *label,
        System_String_o *text,
        int32_t size,
        const MethodInfo *method)
{
  if ( (byte_42EC58E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, (_DWORD)text, *(_QWORD *)&size);
    byte_42EC58E = 1;
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
  __int64 v4; // x3
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42EC590 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, (_DWORD)method, v4);
    byte_42EC590 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !label )
      sub_B5D69C(v7, v8);
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

  if ( (byte_42EC58D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, (_DWORD)text, method);
    byte_42EC58D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_B5D69C(v6, v7);
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

  if ( (byte_42EC58F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)panel, depth, method);
    byte_42EC58F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)panel, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !panel )
      sub_B5D69C(v6, v7);
    UIPanel__set_depth(panel, depth, 0LL);
  }
}


System_String_o *__fastcall RequestResultDialog__get_closeBtnPath(
        RequestResultDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *cancelButtonObj; // x0
  bool activeInHierarchy; // w0
  __int64 *v10; // x8

  if ( (byte_42EC591 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15678/*"Window/OkBtn"*/, v5, v6, v7);
    byte_42EC591 = 1;
  }
  cancelButtonObj = this->fields.cancelButtonObj;
  if ( !cancelButtonObj )
    sub_B5D69C(0LL, method);
  activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy(cancelButtonObj, 0LL);
  v10 = &StringLiteral_15667/*"Window/CancelButton"*/;
  if ( !activeInHierarchy )
    v10 = &StringLiteral_15678/*"Window/OkBtn"*/;
  return (System_String_o *)*v10;
}