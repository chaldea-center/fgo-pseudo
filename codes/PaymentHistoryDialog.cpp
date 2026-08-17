void PaymentHistoryDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596C65F & 1) == 0 )
  {
    sub_2213A60(&PaymentHistoryDialog_TypeInfo);
    sub_2213A60(&StringLiteral_433/*"#494949"*/);
    byte_596C65F = 1;
  }
  v7 = StringLiteral_433/*"#494949"*/;
  PaymentHistoryDialog_TypeInfo->static_fields->REFLECT_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_433/*"#494949"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PaymentHistoryDialog_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void PaymentHistoryDialog___ctor(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog___ctor((TextLabelScrollDialog_o *)this, 0);
}


void PaymentHistoryDialog__Init(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *paymentHistoryListViewManager; // x0

  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0);
  paymentHistoryListViewManager = (ListViewManager_o *)this->fields.paymentHistoryListViewManager;
  if ( !paymentHistoryListViewManager )
    sub_2213CDC(0, v3);
  ListViewManager__DestroyList(paymentHistoryListViewManager, 0);
}


void PaymentHistoryDialog__OnClickClose(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_596C65D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PaymentHistoryDialog_OnClickClose__);
    sub_2213A60(&Method_PaymentHistoryDialog__OnClickClose_b__16_0__);
    byte_596C65D = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_PaymentHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PaymentHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PaymentHistoryDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  }
  v5 = System_Action_TypeInfo;
  this->fields.state = 2;
  v6 = (System_Action_o *)sub_2213CCC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PaymentHistoryDialog__OnClickClose_b__16_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void PaymentHistoryDialog__OnClickReflect(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 canReflect; // w9
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  PaymentHistoryDialog_c *v8; // x0
  __int64 v9; // x1
  UIButtonColor_o *reflectButtonColor; // x0
  PaymentHistoryDialog_o *v11; // x0
  const MethodInfo *v12; // x1
  System_Collections_IEnumerator_o *v13; // x0
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Reflection_MethodBase_o *v17; // x0
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_596C65C & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_PaymentHistoryRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_PaymentHistoryDialog_OnClickReflect__);
    sub_2213A60(&Method_PaymentHistoryDialog__OnClickReflect_b__15_0__);
    sub_2213A60(&PaymentHistoryDialog_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596C65C = 1;
  }
  v3 = Method_PaymentHistoryDialog_OnClickReflect__;
  canReflect = this->fields.canReflect;
  *(_QWORD *)&v18.fields.r = 0;
  *(_QWORD *)&v18.fields.b = 0;
  if ( canReflect )
  {
    if ( (*((_BYTE *)Method_PaymentHistoryDialog_OnClickReflect__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PaymentHistoryDialog_OnClickReflect__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    v8 = PaymentHistoryDialog_TypeInfo;
    if ( !*(&PaymentHistoryDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PaymentHistoryDialog_TypeInfo, v6, v7);
      v8 = PaymentHistoryDialog_TypeInfo;
    }
    UnityEngine_ColorUtility__TryParseHtmlString(v8->static_fields->REFLECT_BUTTON_DISABLED_COLOR_CODE, &v18, 0);
    reflectButtonColor = this->fields.reflectButtonColor;
    if ( !reflectButtonColor )
      goto LABEL_18;
    ((void (__fastcall *)(UIButtonColor_o *, __int64, __int64, const MethodInfo *))reflectButtonColor->klass->vtable._14_SetState.methodPtr)(
      reflectButtonColor,
      3,
      1,
      reflectButtonColor->klass->vtable._14_SetState.method);
    reflectButtonColor = this->fields.reflectButtonColor;
    if ( !reflectButtonColor )
      goto LABEL_18;
    UIButtonColor__set_defaultColor(reflectButtonColor, v18, 0);
    reflectButtonColor = this->fields.reflectButtonColor;
    if ( !reflectButtonColor )
      goto LABEL_18;
    v11 = (PaymentHistoryDialog_o *)((__int64 (__fastcall *)(UIButtonColor_o *, _QWORD, const MethodInfo *))reflectButtonColor->klass->vtable._5_set_isEnabled.methodPtr)(
                                      reflectButtonColor,
                                      0,
                                      reflectButtonColor->klass->vtable._5_set_isEnabled.method);
    this->fields.isRemainFlag = 1;
    v13 = PaymentHistoryDialog__WaitExternalPayment(v11, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v13, 0);
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_PaymentHistoryDialog__OnClickReflect_b__15_0__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
    reflectButtonColor = (UIButtonColor_o *)NetworkManager__getRequest_object_(
                                              v14,
                                              (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
    if ( !reflectButtonColor )
LABEL_18:
      sub_2213CDC(reflectButtonColor, v9);
    PaymentHistoryRequest__beginRequest((PaymentHistoryRequest_o *)reflectButtonColor, 0, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_PaymentHistoryDialog_OnClickReflect__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PaymentHistoryDialog_OnClickReflect__);
    v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0, 0);
  }
}


void PaymentHistoryDialog__Open(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *v5; // x0
  UILabel_o *UpperMessageLabel; // x20
  System_String_o *paymentHistoryListViewManager; // x0
  const MethodInfo *v8; // x1
  UILabel_o *reflectMessageLabel; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *messageLabel; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *closeLabel; // x20
  UILabel_o *reflectButtonLabel; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_596C659 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10757/*"PAYMENT_HISTORY_REFLECT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10755/*"PAYMENT_HISTORY_NODATA"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_10756/*"PAYMENT_HISTORY_REFLECT_BUTTON"*/);
    sub_2213A60(&StringLiteral_10761/*"PAYMENT_HISTORY_TITLE"*/);
    sub_2213A60(&StringLiteral_10762/*"PAYMENT_HISTORY_UPPER_MESSAGE"*/);
    byte_596C659 = 1;
  }
  ((void (__fastcall *)(PaymentHistoryDialog_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10761/*"PAYMENT_HISTORY_TITLE"*/, 0);
  TextLabelScrollDialog__Open(
    (TextLabelScrollDialog_o *)this,
    v5,
    **(System_String_o ***)(qword_5984390 + 184),
    0,
    0,
    0);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10762/*"PAYMENT_HISTORY_UPPER_MESSAGE"*/, 0);
  if ( !UpperMessageLabel )
    goto LABEL_22;
  UILabel__set_text(UpperMessageLabel, paymentHistoryListViewManager, 0);
  reflectMessageLabel = this->fields.reflectMessageLabel;
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10757/*"PAYMENT_HISTORY_REFLECT_MESSAGE"*/, 0);
  if ( !reflectMessageLabel )
    goto LABEL_22;
  UILabel__set_text(reflectMessageLabel, paymentHistoryListViewManager, 0);
  paymentHistoryListViewManager = (System_String_o *)this->fields.paymentHistoryListViewManager;
  if ( !paymentHistoryListViewManager )
    goto LABEL_22;
  PaymentHistoryListViewManager__CreateList((PaymentHistoryListViewManager_o *)paymentHistoryListViewManager, v8);
  paymentHistoryListViewManager = (System_String_o *)this->fields.paymentHistoryListViewManager;
  if ( !paymentHistoryListViewManager )
    goto LABEL_22;
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)paymentHistoryListViewManager, 0) <= 0 )
  {
    paymentHistoryListViewManager = (System_String_o *)this->fields.messageLabel;
    if ( paymentHistoryListViewManager )
    {
      paymentHistoryListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)paymentHistoryListViewManager,
                                                           0);
      if ( paymentHistoryListViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)paymentHistoryListViewManager, 1, 0);
        messageLabel = this->fields.messageLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
        paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10755/*"PAYMENT_HISTORY_NODATA"*/, 0);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, paymentHistoryListViewManager, 0);
          goto LABEL_16;
        }
      }
    }
LABEL_22:
    sub_2213CDC(paymentHistoryListViewManager, v8);
  }
LABEL_16:
  paymentHistoryListViewManager = (System_String_o *)this->fields.scrollView;
  if ( !paymentHistoryListViewManager )
    goto LABEL_22;
  HIDWORD(paymentHistoryListViewManager[3].monitor) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)paymentHistoryListViewManager, 0);
  closeLabel = this->fields.closeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_22;
  UILabel__set_text(closeLabel, paymentHistoryListViewManager, 0);
  reflectButtonLabel = this->fields.reflectButtonLabel;
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10756/*"PAYMENT_HISTORY_REFLECT_BUTTON"*/, 0);
  if ( !reflectButtonLabel )
    goto LABEL_22;
  UILabel__set_text(reflectButtonLabel, paymentHistoryListViewManager, 0);
  this->fields.closeAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v17, v18, v19, v20, v21, v22);
  this->fields.decideAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.decideAction, 0, v23, v24, v25, v26, v27, v28);
}


void PaymentHistoryDialog__ResetScrollView(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *v6; // x20

  if ( (byte_596C65A & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10755/*"PAYMENT_HISTORY_NODATA"*/);
    byte_596C65A = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_17;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0);
  if ( !messageLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.paymentHistoryListViewManager;
  if ( !messageLabel )
    goto LABEL_17;
  ListViewManager__DestroyList((ListViewManager_o *)messageLabel, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.paymentHistoryListViewManager;
  if ( !messageLabel )
    goto LABEL_17;
  PaymentHistoryListViewManager__CreateList((PaymentHistoryListViewManager_o *)messageLabel, method);
  messageLabel = (UnityEngine_Component_o *)this->fields.paymentHistoryListViewManager;
  if ( !messageLabel )
    goto LABEL_17;
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)messageLabel, 0) > 0 )
    goto LABEL_15;
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_17;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0);
  if ( !messageLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0);
  v6 = this->fields.messageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  messageLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10755/*"PAYMENT_HISTORY_NODATA"*/, 0);
  if ( !v6 )
LABEL_17:
    sub_2213CDC(messageLabel, method);
  UILabel__set_text(v6, (System_String_o *)messageLabel, 0);
LABEL_15:
  messageLabel = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !messageLabel )
    goto LABEL_17;
  HIDWORD(messageLabel[3].monitor) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)messageLabel, 0);
}


void PaymentHistoryDialog__Update(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  if ( this->fields.state != 2 )
    PaymentHistoryDialog__UpdateReflectButtonInfo(this, method);
}


void PaymentHistoryDialog__UpdateReflectButtonInfo(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 ReflectRemain; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t Time; // x0
  int64_t v8; // x20
  UIButtonColor_o *reflectButtonColor; // x0
  UILabel_o *reflectRemainLabel; // x21
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  _BOOL4 isRemainFlag; // w8
  PaymentHistoryDialog_c *v15; // x0
  int64_t remain; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596C65E & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&PaymentHistoryDialog_TypeInfo);
    sub_2213A60(&PaymentHistoryRequest_TypeInfo);
    sub_2213A60(&StringLiteral_26484/*"{0}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C65E = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  if ( !*(&PaymentHistoryRequest_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, method, v2);
  ReflectRemain = PaymentHistoryRequest__getReflectRemain(0);
  this->fields.remain = ReflectRemain;
  if ( ReflectRemain <= 0 )
  {
    if ( !this->fields.canReflect )
    {
      reflectButtonColor = this->fields.reflectButtonColor;
      this->fields.canReflect = 1;
      if ( !reflectButtonColor )
        goto LABEL_28;
      ((void (__fastcall *)(UIButtonColor_o *, _QWORD, __int64, const MethodInfo *))reflectButtonColor->klass->vtable._14_SetState.methodPtr)(
        reflectButtonColor,
        0,
        1,
        reflectButtonColor->klass->vtable._14_SetState.method);
      reflectButtonColor = this->fields.reflectButtonColor;
      if ( !reflectButtonColor )
        goto LABEL_28;
      v18.fields.r = 1.0;
      v18.fields.g = 1.0;
      v18.fields.b = 1.0;
      v18.fields.a = 1.0;
      UIButtonColor__set_defaultColor(reflectButtonColor, v18, 0);
      reflectButtonColor = this->fields.reflectButtonColor;
      if ( !reflectButtonColor )
        goto LABEL_28;
      ((void (__fastcall *)(UIButtonColor_o *, __int64, const MethodInfo *))reflectButtonColor->klass->vtable._5_set_isEnabled.methodPtr)(
        reflectButtonColor,
        1,
        reflectButtonColor->klass->vtable._5_set_isEnabled.method);
      reflectButtonColor = (UIButtonColor_o *)this->fields.reflectRemainLabel;
      if ( !reflectButtonColor )
        goto LABEL_28;
      reflectButtonColor = (UIButtonColor_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)reflectButtonColor,
                                                0);
      if ( !reflectButtonColor )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)reflectButtonColor, 0, 0);
      reflectButtonColor = (UIButtonColor_o *)this->fields.reflectRemainLabel;
      if ( !reflectButtonColor )
        goto LABEL_28;
      UILabel__set_text((UILabel_o *)reflectButtonColor, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
  }
  else
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Time = NetworkManager__getTime(0);
    if ( this->fields.reflectCheckTime != Time )
    {
      v8 = Time;
      reflectButtonColor = (UIButtonColor_o *)this->fields.reflectRemainLabel;
      this->fields.canReflect = 0;
      if ( !reflectButtonColor )
        goto LABEL_28;
      reflectButtonColor = (UIButtonColor_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)reflectButtonColor,
                                                0);
      if ( !reflectButtonColor )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)reflectButtonColor, 1, 0);
      reflectRemainLabel = this->fields.reflectRemainLabel;
      remain = this->fields.remain;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &remain);
      reflectButtonColor = (UIButtonColor_o *)System_String__Format((System_String_o *)StringLiteral_26484/*"{0}"*/, v11, 0);
      if ( !reflectRemainLabel )
        goto LABEL_28;
      UILabel__set_text(reflectRemainLabel, (System_String_o *)reflectButtonColor, 0);
      isRemainFlag = this->fields.isRemainFlag;
      this->fields.reflectCheckTime = v8;
      if ( !isRemainFlag )
      {
        v15 = PaymentHistoryDialog_TypeInfo;
        if ( !*(&PaymentHistoryDialog_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(PaymentHistoryDialog_TypeInfo, v12, v13);
          v15 = PaymentHistoryDialog_TypeInfo;
        }
        UnityEngine_ColorUtility__TryParseHtmlString(v15->static_fields->REFLECT_BUTTON_DISABLED_COLOR_CODE, &color, 0);
        reflectButtonColor = this->fields.reflectButtonColor;
        if ( reflectButtonColor )
        {
          ((void (__fastcall *)(UIButtonColor_o *, __int64, __int64, const MethodInfo *))reflectButtonColor->klass->vtable._14_SetState.methodPtr)(
            reflectButtonColor,
            3,
            1,
            reflectButtonColor->klass->vtable._14_SetState.method);
          reflectButtonColor = this->fields.reflectButtonColor;
          if ( reflectButtonColor )
          {
            UIButtonColor__set_defaultColor(reflectButtonColor, color, 0);
            reflectButtonColor = this->fields.reflectButtonColor;
            if ( reflectButtonColor )
            {
              ((void (__fastcall *)(UIButtonColor_o *, _QWORD, const MethodInfo *))reflectButtonColor->klass->vtable._5_set_isEnabled.methodPtr)(
                reflectButtonColor,
                0,
                reflectButtonColor->klass->vtable._5_set_isEnabled.method);
              this->fields.isRemainFlag = 1;
              return;
            }
          }
        }
LABEL_28:
        sub_2213CDC(reflectButtonColor, v5);
      }
    }
  }
}


System_Collections_IEnumerator_o *PaymentHistoryDialog__WaitExternalPayment(
        PaymentHistoryDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_596C65B & 1) == 0 )
  {
    sub_2213A60(&PaymentHistoryDialog__WaitExternalPayment_d__14_TypeInfo);
    byte_596C65B = 1;
  }
  v2 = sub_2213CCC(PaymentHistoryDialog__WaitExternalPayment_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  result = (System_Collections_IEnumerator_o *)v2;
  *(_DWORD *)(v2 + 16) = 0;
  return result;
}


void PaymentHistoryDialog___OnClickClose_b__16_0(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 remain; // x20

  if ( (byte_596C660 & 1) == 0 )
  {
    sub_2213A60(&PaymentHistoryRequest_TypeInfo);
    byte_596C660 = 1;
  }
  remain = this->fields.remain;
  if ( remain >= 1 )
  {
    if ( !*(&PaymentHistoryRequest_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, method, v2);
    PaymentHistoryRequest__SetRemainTime(remain, 0);
  }
  ActionExtensions__Call(this->fields.closeAction, 0);
  ((void (__fastcall *)(PaymentHistoryDialog_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method);
}


void PaymentHistoryDialog__WaitExternalPayment_d__14___ctor(
        PaymentHistoryDialog__WaitExternalPayment_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool PaymentHistoryDialog__WaitExternalPayment_d__14__MoveNext(
        PaymentHistoryDialog__WaitExternalPayment_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t _1__state; // w22
  int32_t v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  PaymentHistoryDialog___c_c *v8; // x0
  struct PaymentHistoryDialog___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__14_0; // x20
  Il2CppObject *v11; // x21
  struct PaymentHistoryDialog___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_WaitUntil_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596C663 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&PurchaseBehaviour_TypeInfo);
    sub_2213A60(&Method_PaymentHistoryDialog___c__WaitExternalPayment_b__14_0__);
    sub_2213A60(&PaymentHistoryDialog___c_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596C663 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method, v2);
    PurchaseBehaviour__ActivateExternal(0);
    v8 = PaymentHistoryDialog___c_TypeInfo;
    if ( !*(&PaymentHistoryDialog___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PaymentHistoryDialog___c_TypeInfo, v6, v7);
      v8 = PaymentHistoryDialog___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__14_0 = static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v6, v7);
        static_fields = PaymentHistoryDialog___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__14_0 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__14_0, v11, Method_PaymentHistoryDialog___c__WaitExternalPayment_b__14_0__, 0);
      v12 = PaymentHistoryDialog___c_TypeInfo->static_fields;
      v12->__9__14_0 = _9__14_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__14_0, (int32_t)_9__14_0, v13, v14, v15, v16, v17, v18);
    }
    v19 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v19, _9__14_0, 0);
    this->fields.__2__current = (Il2CppObject *)v19;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v5 = 1;
    goto LABEL_15;
  }
  if ( _1__state == 1 )
  {
    v5 = -1;
LABEL_15:
    this->fields.__1__state = v5;
  }
  return _1__state == 0;
}


Il2CppObject *PaymentHistoryDialog__WaitExternalPayment_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        PaymentHistoryDialog__WaitExternalPayment_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn PaymentHistoryDialog__WaitExternalPayment_d__14__System_Collections_IEnumerator_Reset(
        PaymentHistoryDialog__WaitExternalPayment_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_PaymentHistoryDialog__WaitExternalPayment_d__14_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *PaymentHistoryDialog__WaitExternalPayment_d__14__System_Collections_IEnumerator_get_Current(
        PaymentHistoryDialog__WaitExternalPayment_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void PaymentHistoryDialog__WaitExternalPayment_d__14__System_IDisposable_Dispose(
        PaymentHistoryDialog__WaitExternalPayment_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void PaymentHistoryDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C661 & 1) == 0 )
  {
    sub_2213A60(&PaymentHistoryDialog___c_TypeInfo);
    byte_596C661 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(PaymentHistoryDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PaymentHistoryDialog___c_TypeInfo->static_fields->__9 = (struct PaymentHistoryDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PaymentHistoryDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PaymentHistoryDialog___c___ctor(PaymentHistoryDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PaymentHistoryDialog___c___WaitExternalPayment_b__14_0(PaymentHistoryDialog___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseLogicExternal_c *v3; // x0

  if ( (byte_596C662 & 1) == 0 )
  {
    sub_2213A60(&PurchaseLogicExternal_TypeInfo);
    byte_596C662 = 1;
  }
  v3 = PurchaseLogicExternal_TypeInfo;
  if ( !*(&PurchaseLogicExternal_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo, method, v2);
    v3 = PurchaseLogicExternal_TypeInfo;
  }
  return v3->static_fields->isEnd;
}