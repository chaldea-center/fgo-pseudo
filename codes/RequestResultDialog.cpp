void RequestResultDialog___ctor(RequestResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C233B5 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C233B5 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RequestResultDialog__CallOnClose(RequestResultDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *onClose; // x19
  CGThumbnailListItem_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (CGThumbnailListItem_o *)&this->fields.onClose;
    p_onClose->klass = 0;
    sub_1C2D434(p_onClose, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))onClose->fields.invoke_impl)(
      onClose->fields.method_code,
      onClose->fields.method);
  }
}


void RequestResultDialog__CallOnDecide(RequestResultDialog_o *this, bool isOk, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_bool__o *onDecide; // x20
  CGThumbnailListItem_o *p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = (CGThumbnailListItem_o *)&this->fields.onDecide;
    p_onDecide->klass = 0;
    sub_1C2D434(p_onDecide, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      isOk,
      onDecide->fields.method);
  }
}


void RequestResultDialog__Close(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RequestResultDialog__Close_34816872(this, 0, v2);
}


void RequestResultDialog__Close_34816872(
        RequestResultDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C233AC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_RequestResultDialog_EndClose__);
    byte_4C233AC = 1;
  }
  this->fields.onClose = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_RequestResultDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
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
  UnityEngine_Object_o *TargetPanel; // x20
  UIPanel_o *v4; // x0
  __int64 v5; // x1
  int32_t *p_keepPanelDepth; // x8

  if ( (byte_4C233AB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C233AB = 1;
  }
  if ( this->fields.isInitPanelDepth )
    goto LABEL_9;
  this->fields.isInitPanelDepth = 1;
  TargetPanel = (UnityEngine_Object_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(TargetPanel, 0, 0) )
  {
LABEL_9:
    p_keepPanelDepth = &this->fields.keepPanelDepth;
  }
  else
  {
    v4 = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
    if ( !v4 )
      sub_1C2D6EC(0, v5);
    p_keepPanelDepth = &v4->fields.mDepth;
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
  if ( (byte_4C233A6 & 1) == 0 )
  {
    this = (RequestResultDialog_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C233A6 = 1;
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
    sub_1C2D6EC(0, v17);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)v3, 0);
}


void RequestResultDialog__OnClickCancel(RequestResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C233AF & 1) == 0 )
  {
    sub_1C2D490(&Method_RequestResultDialog_OnClickCancel__);
    byte_4C233AF = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RequestResultDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RequestResultDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    RequestResultDialog__CallOnDecide(this, 0, v5);
  }
}


void RequestResultDialog__OnClickDecide(RequestResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C233AE & 1) == 0 )
  {
    sub_1C2D490(&Method_RequestResultDialog_OnClickDecide__);
    byte_4C233AE = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RequestResultDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RequestResultDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    RequestResultDialog__CallOnDecide(this, 1, v5);
  }
}


void RequestResultDialog__OnClickOk(RequestResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C233AD & 1) == 0 )
  {
    sub_1C2D490(&Method_RequestResultDialog_OnClickOk__);
    byte_4C233AD = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RequestResultDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RequestResultDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C233A7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C233A7 = 1;
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  char v18; // w24
  char v19; // w24
  RequestResultDialog_o *v20; // x0
  const MethodInfo *v21; // x4
  int32_t v22; // w3
  RequestResultDialog_o *v23; // x0
  const MethodInfo *v24; // x3
  RequestResultDialog_o *v25; // x0
  const MethodInfo *v26; // x3
  RequestResultDialog_o *v27; // x0
  const MethodInfo *v28; // x3
  UILabel_o **p_addMessage2Label; // x8
  RequestResultDialog_o *v30; // x0
  const MethodInfo *v31; // x3
  RequestResultDialog_o *v32; // x0
  const MethodInfo *v33; // x3
  RequestResultDialog_o *v34; // x0
  const MethodInfo *v35; // x3
  UILabel_o *okBtnLabel; // x20
  RequestResultDialog_o *v37; // x0
  const MethodInfo *v38; // x3
  RequestResultDialog_o *TargetPanel; // x0
  const MethodInfo *v40; // x3
  System_Action_o *v41; // x20

  if ( (byte_4C233A8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_RequestResultDialog_EndOpen__);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4C233A8 = 1;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onDecide, (int32_t)onDecide, v16, v17);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0);
  if ( !this->fields.itemBuyWindowObj )
    goto LABEL_20;
  v18 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.itemBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0);
  KeepPanelDepth = this->fields.itemBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  v19 = ~v18;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, v19 & 1, 0);
  if ( (v19 & 1) != 0 )
  {
    RequestResultDialog__SetLabelFontSizeAdjust(v20, this->fields.itemMessage2Label, message, 30, v21);
    RequestResultDialog__SetLabelText(v30, this->fields.itemMessage2Label, message, v31);
    RequestResultDialog__SetLabelText(v32, this->fields.numMessage2Label, numMessage, v33);
    RequestResultDialog__SetLabelText(v34, this->fields.userItemNum2Label, userItemNumMessage, v35);
    p_addMessage2Label = &this->fields.addMessage2Label;
    userItemNumMessage = addMessage;
  }
  else
  {
    v22 = this->fields.itemMessageLabelOverwriteFontSize <= 0 ? 30 : this->fields.itemMessageLabelOverwriteFontSize;
    RequestResultDialog__SetLabelFontSizeAdjust(v20, this->fields.itemMessageLabel, message, v22, v21);
    RequestResultDialog__SetLabelText(v23, this->fields.itemMessageLabel, message, v24);
    RequestResultDialog__SetLabelText(v25, this->fields.numMessageLabel, numMessage, v26);
    p_addMessage2Label = &this->fields.userItemNumLabel;
  }
  RequestResultDialog__SetLabelText(v27, *p_addMessage2Label, userItemNumMessage, v28);
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = (RequestResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
  RequestResultDialog__SetLabelText(v37, okBtnLabel, (System_String_o *)v37, v38);
  TargetPanel = (RequestResultDialog_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  RequestResultDialog__SetPanelDepth(TargetPanel, (UIPanel_o *)TargetPanel, this->fields.keepPanelDepth, v40);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
    this,
    0,
    this->klass->vtable._5_set_closeBtnObject.method);
  KeepPanelDepth = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !KeepPanelDepth )
LABEL_20:
    sub_1C2D6EC(KeepPanelDepth, v14);
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0);
  this->fields.isButtonEnable = 0;
  v41 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0);
}


void RequestResultDialog__OpenAddMsg_34815856(
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
  const MethodInfo *v20; // x1
  UnityEngine_GameObject_o *KeepPanelDepth; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *itemBuyWindowObj; // x8
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  char v26; // w28
  char v27; // w28
  RequestResultDialog_o *v28; // x0
  const MethodInfo *v29; // x3
  System_String_o *v30; // x2
  RequestResultDialog_o *v31; // x0
  const MethodInfo *v32; // x4
  RequestResultDialog_o *v33; // x0
  const MethodInfo *v34; // x3
  RequestResultDialog_o *v35; // x0
  const MethodInfo *v36; // x4
  RequestResultDialog_o *v37; // x0
  const MethodInfo *v38; // x3
  RequestResultDialog_o *v39; // x0
  const MethodInfo *v40; // x2
  RequestResultDialog_o *v41; // x0
  const MethodInfo *v42; // x4
  RequestResultDialog_o *v43; // x0
  const MethodInfo *v44; // x3
  RequestResultDialog_o *v45; // x0
  const MethodInfo *v46; // x2
  struct UILabel_o *okBtnLabel; // x21
  RequestResultDialog_o *v48; // x0
  const MethodInfo *v49; // x3
  UILabel_o *decideButtonLabel; // x1
  System_String_o *v51; // x2
  RequestResultDialog_o *v52; // x0
  const MethodInfo *v53; // x3
  RequestResultDialog_o *TargetPanel; // x0
  const MethodInfo *v55; // x3
  System_Action_o *v56; // x20

  if ( (byte_4C233AA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_RequestResultDialog_EndOpen__);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C233AA = 1;
  }
  BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  KeepPanelDepth = (UnityEngine_GameObject_o *)RequestResultDialog__GetKeepPanelDepth(this, v20);
  itemBuyWindowObj = this->fields.itemBuyWindowObj;
  this->fields.keepPanelDepth = (int)KeepPanelDepth;
  if ( !itemBuyWindowObj )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(itemBuyWindowObj, 0, 0);
  KeepPanelDepth = this->fields.itemBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0);
  this->fields.onDecide = onDecide;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onDecide, (int32_t)onDecide, v24, v25);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0);
  if ( !this->fields.normalBuyWindowObj )
    goto LABEL_27;
  v26 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.normalBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0);
  KeepPanelDepth = this->fields.normalBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_27;
  v27 = ~v26;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, v27 & 1, 0);
  v30 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
  if ( (v27 & 1) != 0 )
  {
    RequestResultDialog__SetLabelText(v28, this->fields.title2Label, v30, v29);
    RequestResultDialog__SetLabelFontSizeAdjust(v35, this->fields.message2Label, message, fontSize, v36);
    RequestResultDialog__SetLabelText(v37, this->fields.message2Label, message, v38);
    RequestResultDialog__SetLabelLacalPositionY(v39, this->fields.message2Label, (float)message2Y, v40);
    RequestResultDialog__SetLabelFontSizeAdjust(v41, this->fields.addMessageLabel, message, fontSize, v42);
    RequestResultDialog__SetLabelText(v43, this->fields.addMessageLabel, addMessage, v44);
    RequestResultDialog__SetLabelLacalPositionY(v45, this->fields.addMessageLabel, (float)addMessageY, v46);
  }
  else
  {
    RequestResultDialog__SetLabelText(v28, this->fields.titleLabel, v30, v29);
    RequestResultDialog__SetLabelFontSizeAdjust(v31, this->fields.messageLabel, message, fontSize, v32);
    RequestResultDialog__SetLabelText(v33, this->fields.messageLabel, message, v34);
  }
  KeepPanelDepth = this->fields.okBtnObj;
  if ( !KeepPanelDepth )
    goto LABEL_27;
  if ( __PAIR128__((unsigned __int64)decideMessage, (unsigned __int64)cancelMessage) != 0 )
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
        RequestResultDialog__SetLabelText(v52, this->fields.cancelButtonLabel, cancelMessage, v53);
        decideButtonLabel = this->fields.decideButtonLabel;
        v51 = decideMessage;
        goto LABEL_23;
      }
    }
LABEL_27:
    sub_1C2D6EC(KeepPanelDepth, v22);
  }
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0);
  KeepPanelDepth = this->fields.cancelButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0);
  KeepPanelDepth = this->fields.decideButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0);
  okBtnLabel = this->fields.okBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v48 = (RequestResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
  decideButtonLabel = okBtnLabel;
  v51 = (System_String_o *)v48;
LABEL_23:
  RequestResultDialog__SetLabelText(v48, decideButtonLabel, v51, v49);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
    this,
    0,
    this->klass->vtable._5_set_closeBtnObject.method);
  KeepPanelDepth = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !KeepPanelDepth )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0);
  TargetPanel = (RequestResultDialog_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  if ( panelDepth < 0 )
    panelDepth = this->fields.keepPanelDepth;
  RequestResultDialog__SetPanelDepth(TargetPanel, (UIPanel_o *)TargetPanel, panelDepth, v55);
  this->fields.isButtonEnable = 0;
  v56 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v56, 0, 0);
}


void RequestResultDialog__Open_34815704(
        RequestResultDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_bool__o *onDecide,
        int32_t panelDepth,
        const MethodInfo *method)
{
  const MethodInfo *v11; // [xsp+18h] [xbp-48h]

  if ( (byte_4C233A9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C233A9 = 1;
  }
  RequestResultDialog__OpenAddMsg_34815856(
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
  if ( (byte_4C233B1 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C233B1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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

  if ( (byte_4C233B3 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C233B3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_1C2D6EC(v6, v7);
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

  if ( (byte_4C233B0 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C233B0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_1C2D6EC(v6, v7);
    UILabel__set_text(label, text, 0);
  }
}


void RequestResultDialog__SetPanelDepth(
        RequestResultDialog_o *this,
        UIPanel_o *panel,
        int32_t depth,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C233B2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C233B2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)panel, 0, 0);
  if ( !v6 )
  {
    if ( !panel )
      sub_1C2D6EC(v6, v7);
    UIPanel__set_depth(panel, depth, 0);
  }
}


System_String_o *RequestResultDialog__get_closeBtnPath(RequestResultDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *cancelButtonObj; // x0
  __int64 *v4; // x8

  if ( (byte_4C233B4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15638/*"Window/CancelButton"*/);
    sub_1C2D490(&StringLiteral_15649/*"Window/OkBtn"*/);
    byte_4C233B4 = 1;
  }
  cancelButtonObj = this->fields.cancelButtonObj;
  if ( !cancelButtonObj )
    sub_1C2D6EC(0, method);
  if ( UnityEngine_GameObject__get_activeInHierarchy(cancelButtonObj, 0) )
    v4 = &StringLiteral_15638/*"Window/CancelButton"*/;
  else
    v4 = &StringLiteral_15649/*"Window/OkBtn"*/;
  return (System_String_o *)*v4;
}