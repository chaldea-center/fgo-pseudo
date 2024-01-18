void __fastcall RequestResultDialog___ctor(RequestResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418ADB0 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418ADB0 = 1;
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
    sub_B2C2F8(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_418ADAA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__Invoke__, isOk);
    byte_418ADAA = 1;
  }
  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_bool___Invoke(onDecide, isOk, (const MethodInfo_24B7BA4 *)Method_System_Action_bool__Invoke__);
  }
}


void __fastcall RequestResultDialog__Close(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RequestResultDialog__Close_31060344(this, 0LL, v2);
}


void __fastcall RequestResultDialog__Close_31060344(
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
  System_Action_o *v11; // x20

  if ( (byte_418ADA6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_RequestResultDialog_EndClose__, v10);
    byte_418ADA6 = 1;
  }
  this->fields.onClose = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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

  if ( (byte_418ADA5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418ADA5 = 1;
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
      sub_B2C434(0LL, v5);
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
  if ( (byte_418ADA0 & 1) == 0 )
  {
    this = (RequestResultDialog_o *)sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418ADA0 = 1;
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
    sub_B2C434(0LL, v17);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)v3, 0LL);
}


void __fastcall RequestResultDialog__OnClickCancel(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418ADA9 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418ADA9 = 1;
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

  if ( (byte_418ADA8 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418ADA8 = 1;
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

  if ( (byte_418ADA7 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418ADA7 = 1;
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

  if ( (byte_418ADA1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, message);
    byte_418ADA1 = 1;
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
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
  UILabel_o *addMessage2Label; // x1
  System_String_o *v37; // x2
  RequestResultDialog_o *v38; // x0
  const MethodInfo *v39; // x3
  RequestResultDialog_o *v40; // x0
  const MethodInfo *v41; // x3
  RequestResultDialog_o *v42; // x0
  const MethodInfo *v43; // x3
  UILabel_o *okBtnLabel; // x20
  System_String_o *v45; // x0
  const MethodInfo *v46; // x3
  UIPanel_o *TargetPanel; // x0
  const MethodInfo *v48; // x3
  System_Action_o *v49; // x20

  if ( (byte_418ADA2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, message);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&Method_RequestResultDialog_EndOpen__, v14);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v15);
    byte_418ADA2 = 1;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onDecide,
    (System_Int32_array **)onDecide,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0LL);
  if ( !this->fields.itemBuyWindowObj )
    goto LABEL_21;
  v25 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.itemBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0LL);
  KeepPanelDepth = this->fields.itemBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_21;
  v26 = ~v25;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, v26 & 1, 0LL);
  if ( (v26 & 1) != 0 )
  {
    RequestResultDialog__SetLabelFontSizeAdjust(v27, this->fields.itemMessage2Label, message, 30, v28);
    RequestResultDialog__SetLabelText(v38, this->fields.itemMessage2Label, message, v39);
    RequestResultDialog__SetLabelText(v40, this->fields.numMessage2Label, numMessage, v41);
    RequestResultDialog__SetLabelText(v42, this->fields.userItemNum2Label, userItemNumMessage, v43);
    addMessage2Label = this->fields.addMessage2Label;
    v37 = addMessage;
  }
  else
  {
    v29 = this->fields.itemMessageLabelOverwriteFontSize <= 0 ? 30 : this->fields.itemMessageLabelOverwriteFontSize;
    RequestResultDialog__SetLabelFontSizeAdjust(v27, this->fields.itemMessageLabel, message, v29, v28);
    RequestResultDialog__SetLabelText(v30, this->fields.itemMessageLabel, message, v31);
    RequestResultDialog__SetLabelText(v32, this->fields.numMessageLabel, numMessage, v33);
    addMessage2Label = this->fields.userItemNumLabel;
    v37 = userItemNumMessage;
  }
  RequestResultDialog__SetLabelText(v34, addMessage2Label, v37, v35);
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
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  RequestResultDialog__SetLabelText((RequestResultDialog_o *)v45, okBtnLabel, v45, v46);
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  RequestResultDialog__SetPanelDepth(
    (RequestResultDialog_o *)TargetPanel,
    TargetPanel,
    this->fields.keepPanelDepth,
    v48);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    0LL,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
  KeepPanelDepth = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !KeepPanelDepth )
LABEL_21:
    sub_B2C434(KeepPanelDepth, v17);
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
  this->fields.isButtonEnable = 0;
  v49 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
}


void __fastcall RequestResultDialog__OpenAddMsg_31059300(
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
  UnityEngine_GameObject_o *KeepPanelDepth; // x0
  __int64 v25; // x1
  UnityEngine_GameObject_o *itemBuyWindowObj; // x8
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  char v33; // w28
  RequestResultDialog_o *v34; // x0
  const MethodInfo *v35; // x3
  System_String_o *v36; // x2
  RequestResultDialog_o *v37; // x0
  const MethodInfo *v38; // x4
  RequestResultDialog_o *v39; // x0
  const MethodInfo *v40; // x3
  RequestResultDialog_o *v41; // x0
  const MethodInfo *v42; // x4
  RequestResultDialog_o *v43; // x0
  const MethodInfo *v44; // x3
  RequestResultDialog_o *v45; // x0
  const MethodInfo *v46; // x2
  RequestResultDialog_o *v47; // x0
  const MethodInfo *v48; // x4
  RequestResultDialog_o *v49; // x0
  const MethodInfo *v50; // x3
  RequestResultDialog_o *v51; // x0
  const MethodInfo *v52; // x2
  struct UILabel_o *okBtnLabel; // x21
  System_String_o *v54; // x0
  const MethodInfo *v55; // x3
  UILabel_o *decideButtonLabel; // x1
  System_String_o *v57; // x2
  RequestResultDialog_o *v58; // x0
  const MethodInfo *v59; // x3
  UIPanel_o *TargetPanel; // x0
  const MethodInfo *v61; // x3
  System_Action_o *v62; // x20

  if ( (byte_418ADA4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, title);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&Method_RequestResultDialog_EndOpen__, v20);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v21);
    sub_B2C35C(&StringLiteral_1/*""*/, v22);
    byte_418ADA4 = 1;
  }
  BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  KeepPanelDepth = (UnityEngine_GameObject_o *)RequestResultDialog__GetKeepPanelDepth(this, v23);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onDecide,
    (System_Int32_array **)onDecide,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0LL);
  if ( !this->fields.normalBuyWindowObj )
    goto LABEL_28;
  v33 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.normalBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0LL);
  KeepPanelDepth = this->fields.normalBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, (v33 & 1) == 0, 0LL);
  v36 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
  if ( (v33 & 1) != 0 )
  {
    RequestResultDialog__SetLabelText(v34, this->fields.titleLabel, v36, v35);
    RequestResultDialog__SetLabelFontSizeAdjust(v37, this->fields.messageLabel, message, fontSize, v38);
    RequestResultDialog__SetLabelText(v39, this->fields.messageLabel, message, v40);
  }
  else
  {
    RequestResultDialog__SetLabelText(v34, this->fields.title2Label, v36, v35);
    RequestResultDialog__SetLabelFontSizeAdjust(v41, this->fields.message2Label, message, fontSize, v42);
    RequestResultDialog__SetLabelText(v43, this->fields.message2Label, message, v44);
    RequestResultDialog__SetLabelLacalPositionY(v45, this->fields.message2Label, (float)message2Y, v46);
    RequestResultDialog__SetLabelFontSizeAdjust(v47, this->fields.addMessageLabel, message, fontSize, v48);
    RequestResultDialog__SetLabelText(v49, this->fields.addMessageLabel, addMessage, v50);
    RequestResultDialog__SetLabelLacalPositionY(v51, this->fields.addMessageLabel, (float)addMessageY, v52);
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
        RequestResultDialog__SetLabelText(v58, this->fields.cancelButtonLabel, cancelMessage, v59);
        decideButtonLabel = this->fields.decideButtonLabel;
        v57 = decideMessage;
        goto LABEL_24;
      }
    }
LABEL_28:
    sub_B2C434(KeepPanelDepth, v25);
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
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  decideButtonLabel = okBtnLabel;
  v57 = v54;
LABEL_24:
  RequestResultDialog__SetLabelText((RequestResultDialog_o *)v54, decideButtonLabel, v57, v55);
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
  RequestResultDialog__SetPanelDepth((RequestResultDialog_o *)TargetPanel, TargetPanel, panelDepth, v61);
  this->fields.isButtonEnable = 0;
  v62 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
}


void __fastcall RequestResultDialog__Open_31059144(
        RequestResultDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_bool__o *onDecide,
        int32_t panelDepth,
        const MethodInfo *method)
{
  const MethodInfo *v11; // [xsp+18h] [xbp-38h]

  if ( (byte_418ADA3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, title);
    byte_418ADA3 = 1;
  }
  RequestResultDialog__OpenAddMsg_31059300(
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
  if ( (byte_418ADAC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    byte_418ADAC = 1;
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
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_418ADAE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    byte_418ADAE = 1;
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
      sub_B2C434(v6, v7);
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

  if ( (byte_418ADAB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    byte_418ADAB = 1;
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
      sub_B2C434(v6, v7);
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

  if ( (byte_418ADAD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, panel);
    byte_418ADAD = 1;
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
      sub_B2C434(v6, v7);
    UIPanel__set_depth(panel, depth, 0LL);
  }
}


System_String_o *__fastcall RequestResultDialog__get_closeBtnPath(
        RequestResultDialog_o *this,
        const MethodInfo *method)
{
  JUMPOUT(0x1D9F4A0LL);
}