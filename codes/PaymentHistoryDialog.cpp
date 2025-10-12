void PaymentHistoryDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C33A54 & 1) == 0 )
  {
    sub_1C32C20(&PaymentHistoryDialog_TypeInfo);
    sub_1C32C20(&StringLiteral_408/*"#494949"*/);
    byte_4C33A54 = 1;
  }
  PaymentHistoryDialog_TypeInfo->static_fields->REFLECT_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_408/*"#494949"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)PaymentHistoryDialog_TypeInfo->static_fields, StringLiteral_408/*"#494949"*/, v1, v2);
}


void PaymentHistoryDialog___ctor(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog___ctor((TextLabelScrollDialog_o *)this, 0);
}


void PaymentHistoryDialog__Init(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *paymentHistoryListViewManager; // x0

  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0);
  paymentHistoryListViewManager = (ListViewManager_o *)this->fields.paymentHistoryListViewManager;
  if ( !paymentHistoryListViewManager )
    sub_1C32E7C(0);
  ListViewManager__DestroyList(paymentHistoryListViewManager, 0);
}


void PaymentHistoryDialog__OnClickClose(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C33A52 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PaymentHistoryDialog_OnClickClose__);
    sub_1C32C20(&Method_PaymentHistoryDialog__OnClickClose_b__16_0__);
    byte_4C33A52 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_PaymentHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PaymentHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PaymentHistoryDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  }
  this->fields.state = 2;
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PaymentHistoryDialog__OnClickClose_b__16_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void PaymentHistoryDialog__OnClickReflect(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 canReflect; // w20
  System_Reflection_MethodBase_o *v5; // x0
  PaymentHistoryDialog_c *v6; // x0
  UIButtonColor_o *reflectButtonColor; // x0
  PaymentHistoryDialog_o *v8; // x0
  const MethodInfo *v9; // x1
  System_Collections_IEnumerator_o *v10; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4C33A51 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_PaymentHistoryRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_PaymentHistoryDialog_OnClickReflect__);
    sub_1C32C20(&Method_PaymentHistoryDialog__OnClickReflect_b__15_0__);
    sub_1C32C20(&PaymentHistoryDialog_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C33A51 = 1;
  }
  v3 = Method_PaymentHistoryDialog_OnClickReflect__;
  *(_QWORD *)&v12.fields.r = 0;
  *(_QWORD *)&v12.fields.b = 0;
  canReflect = this->fields.canReflect;
  if ( (*((_BYTE *)Method_PaymentHistoryDialog_OnClickReflect__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_PaymentHistoryDialog_OnClickReflect__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  if ( canReflect )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    v6 = PaymentHistoryDialog_TypeInfo;
    if ( !PaymentHistoryDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PaymentHistoryDialog_TypeInfo);
      v6 = PaymentHistoryDialog_TypeInfo;
    }
    UnityEngine_ColorUtility__TryParseHtmlString(v6->static_fields->REFLECT_BUTTON_DISABLED_COLOR_CODE, &v12, 0);
    reflectButtonColor = this->fields.reflectButtonColor;
    if ( !reflectButtonColor )
      goto LABEL_17;
    ((void (__fastcall *)(UIButtonColor_o *, __int64, __int64, const MethodInfo *))reflectButtonColor->klass->vtable._14_SetState.methodPtr)(
      reflectButtonColor,
      3,
      1,
      reflectButtonColor->klass->vtable._14_SetState.method);
    reflectButtonColor = this->fields.reflectButtonColor;
    if ( !reflectButtonColor )
      goto LABEL_17;
    UIButtonColor__set_defaultColor(reflectButtonColor, v12, 0);
    reflectButtonColor = this->fields.reflectButtonColor;
    if ( !reflectButtonColor )
      goto LABEL_17;
    v8 = (PaymentHistoryDialog_o *)((__int64 (__fastcall *)(UIButtonColor_o *, _QWORD, const MethodInfo *))reflectButtonColor->klass->vtable._5_set_isEnabled.methodPtr)(
                                     reflectButtonColor,
                                     0,
                                     reflectButtonColor->klass->vtable._5_set_isEnabled.method);
    this->fields.isRemainFlag = 1;
    v10 = PaymentHistoryDialog__WaitExternalPayment(v8, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v10, 0);
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PaymentHistoryDialog__OnClickReflect_b__15_0__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    reflectButtonColor = (UIButtonColor_o *)NetworkManager__getRequest_object_(
                                              v11,
                                              (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
    if ( !reflectButtonColor )
LABEL_17:
      sub_1C32E7C(reflectButtonColor);
    PaymentHistoryRequest__beginRequest((PaymentHistoryRequest_o *)reflectButtonColor, 0, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


void PaymentHistoryDialog__Open(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  UILabel_o *UpperMessageLabel; // x20
  System_String_o *paymentHistoryListViewManager; // x0
  UILabel_o *reflectMessageLabel; // x20
  const MethodInfo *v7; // x1
  UILabel_o *messageLabel; // x20
  UILabel_o *closeLabel; // x20
  UILabel_o *reflectButtonLabel; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C33A4E & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_10341/*"PAYMENT_HISTORY_REFLECT_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_10339/*"PAYMENT_HISTORY_NODATA"*/);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_10340/*"PAYMENT_HISTORY_REFLECT_BUTTON"*/);
    sub_1C32C20(&StringLiteral_10345/*"PAYMENT_HISTORY_TITLE"*/);
    sub_1C32C20(&StringLiteral_10346/*"PAYMENT_HISTORY_UPPER_MESSAGE"*/);
    byte_4C33A4E = 1;
  }
  ((void (__fastcall *)(PaymentHistoryDialog_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10345/*"PAYMENT_HISTORY_TITLE"*/, 0);
  TextLabelScrollDialog__Open((TextLabelScrollDialog_o *)this, v3, string_TypeInfo->static_fields->Empty, 0, 0, 0);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10346/*"PAYMENT_HISTORY_UPPER_MESSAGE"*/, 0);
  if ( !UpperMessageLabel )
    goto LABEL_22;
  UILabel__set_text(UpperMessageLabel, paymentHistoryListViewManager, 0);
  reflectMessageLabel = this->fields.reflectMessageLabel;
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10341/*"PAYMENT_HISTORY_REFLECT_MESSAGE"*/, 0);
  if ( !reflectMessageLabel )
    goto LABEL_22;
  UILabel__set_text(reflectMessageLabel, paymentHistoryListViewManager, 0);
  paymentHistoryListViewManager = (System_String_o *)this->fields.paymentHistoryListViewManager;
  if ( !paymentHistoryListViewManager )
    goto LABEL_22;
  PaymentHistoryListViewManager__CreateList((PaymentHistoryListViewManager_o *)paymentHistoryListViewManager, v7);
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
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10339/*"PAYMENT_HISTORY_NODATA"*/, 0);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, paymentHistoryListViewManager, 0);
          goto LABEL_16;
        }
      }
    }
LABEL_22:
    sub_1C32E7C(paymentHistoryListViewManager);
  }
LABEL_16:
  paymentHistoryListViewManager = (System_String_o *)this->fields.scrollView;
  if ( !paymentHistoryListViewManager )
    goto LABEL_22;
  HIDWORD(paymentHistoryListViewManager[3].monitor) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)paymentHistoryListViewManager, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_22;
  UILabel__set_text(closeLabel, paymentHistoryListViewManager, 0);
  reflectButtonLabel = this->fields.reflectButtonLabel;
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10340/*"PAYMENT_HISTORY_REFLECT_BUTTON"*/, 0);
  if ( !reflectButtonLabel )
    goto LABEL_22;
  UILabel__set_text(reflectButtonLabel, paymentHistoryListViewManager, 0);
  this->fields.closeAction = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeAction, 0, v11, v12);
  this->fields.decideAction = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.decideAction, 0, v13, v14);
}


void PaymentHistoryDialog__ResetScrollView(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  const MethodInfo *v4; // x1
  UILabel_o *v5; // x20

  if ( (byte_4C33A4F & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10339/*"PAYMENT_HISTORY_NODATA"*/);
    byte_4C33A4F = 1;
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
  PaymentHistoryListViewManager__CreateList((PaymentHistoryListViewManager_o *)messageLabel, v4);
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
  v5 = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  messageLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10339/*"PAYMENT_HISTORY_NODATA"*/, 0);
  if ( !v5 )
LABEL_17:
    sub_1C32E7C(messageLabel);
  UILabel__set_text(v5, (System_String_o *)messageLabel, 0);
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
  __int64 ReflectRemain; // x0
  int64_t Time; // x0
  int64_t v5; // x20
  UIButtonColor_o *reflectButtonColor; // x0
  UILabel_o *reflectRemainLabel; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  _BOOL4 isRemainFlag; // w8
  PaymentHistoryDialog_c *v16; // x0
  int64_t remain; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C33A53 & 1) == 0 )
  {
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&PaymentHistoryDialog_TypeInfo);
    sub_1C32C20(&PaymentHistoryRequest_TypeInfo);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33A53 = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
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
      v19.fields.r = 1.0;
      v19.fields.g = 1.0;
      v19.fields.b = 1.0;
      v19.fields.a = 1.0;
      UIButtonColor__set_defaultColor(reflectButtonColor, v19, 0);
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
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( this->fields.reflectCheckTime != Time )
    {
      v5 = Time;
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
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &remain, v8, v9, v10, v11, v12, v13);
      reflectButtonColor = (UIButtonColor_o *)System_String__Format((System_String_o *)StringLiteral_25096/*"{0}"*/, v14, 0);
      if ( !reflectRemainLabel )
        goto LABEL_28;
      UILabel__set_text(reflectRemainLabel, (System_String_o *)reflectButtonColor, 0);
      isRemainFlag = this->fields.isRemainFlag;
      this->fields.reflectCheckTime = v5;
      if ( !isRemainFlag )
      {
        v16 = PaymentHistoryDialog_TypeInfo;
        if ( !PaymentHistoryDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PaymentHistoryDialog_TypeInfo);
          v16 = PaymentHistoryDialog_TypeInfo;
        }
        UnityEngine_ColorUtility__TryParseHtmlString(v16->static_fields->REFLECT_BUTTON_DISABLED_COLOR_CODE, &color, 0);
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
        sub_1C32E7C(reflectButtonColor);
      }
    }
  }
}


System_Collections_IEnumerator_o *PaymentHistoryDialog__WaitExternalPayment(
        PaymentHistoryDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4C33A50 & 1) == 0 )
  {
    sub_1C32C20(&PaymentHistoryDialog__WaitExternalPayment_d__14_TypeInfo);
    byte_4C33A50 = 1;
  }
  v2 = sub_1C32E6C(PaymentHistoryDialog__WaitExternalPayment_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void PaymentHistoryDialog___OnClickClose_b__16_0(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 remain; // x20

  if ( (byte_4C33A55 & 1) == 0 )
  {
    sub_1C32C20(&PaymentHistoryRequest_TypeInfo);
    byte_4C33A55 = 1;
  }
  remain = this->fields.remain;
  if ( remain >= 1 )
  {
    if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
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
  int32_t _1__state; // w8
  bool result; // w0
  PaymentHistoryDialog___c_c *v5; // x0
  System_Func_bool__o *_9__14_0; // x20
  Il2CppObject *v7; // x21
  struct PaymentHistoryDialog___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_WaitUntil_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w8

  if ( (byte_4C33A58 & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    sub_1C32C20(&Method_PaymentHistoryDialog___c__WaitExternalPayment_b__14_0__);
    sub_1C32C20(&PaymentHistoryDialog___c_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C33A58 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v14 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__ActivateExternal(0);
    v5 = PaymentHistoryDialog___c_TypeInfo;
    if ( !PaymentHistoryDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PaymentHistoryDialog___c_TypeInfo);
      v5 = PaymentHistoryDialog___c_TypeInfo;
    }
    _9__14_0 = v5->static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = PaymentHistoryDialog___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__14_0 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__14_0, v7, Method_PaymentHistoryDialog___c__WaitExternalPayment_b__14_0__, 0);
      static_fields = PaymentHistoryDialog___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = _9__14_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v9, v10);
    }
    v11 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v11, _9__14_0, 0);
    this->fields.__2__current = (Il2CppObject *)v11;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v11, v12, v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
  return result;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_PaymentHistoryDialog__WaitExternalPayment_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C33A56 & 1) == 0 )
  {
    sub_1C32C20(&PaymentHistoryDialog___c_TypeInfo);
    byte_4C33A56 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(PaymentHistoryDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PaymentHistoryDialog___c_TypeInfo->static_fields->__9 = (struct PaymentHistoryDialog___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)PaymentHistoryDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PaymentHistoryDialog___c___ctor(PaymentHistoryDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PaymentHistoryDialog___c___WaitExternalPayment_b__14_0(PaymentHistoryDialog___c_o *this, const MethodInfo *method)
{
  PurchaseLogicExternal_c *v2; // x0

  if ( (byte_4C33A57 & 1) == 0 )
  {
    sub_1C32C20(&PurchaseLogicExternal_TypeInfo);
    byte_4C33A57 = 1;
  }
  v2 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v2 = PurchaseLogicExternal_TypeInfo;
  }
  return v2->static_fields->isEnd;
}