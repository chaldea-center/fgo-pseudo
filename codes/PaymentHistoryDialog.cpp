void __fastcall PaymentHistoryDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B1255A & 1) == 0 )
  {
    sub_1BCA7E0(&PaymentHistoryDialog_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_435/*"#494949"*/, v8, v9);
    byte_4B1255A = 1;
  }
  PaymentHistoryDialog_TypeInfo->static_fields->REFLECT_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_435/*"#494949"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PaymentHistoryDialog_TypeInfo->static_fields,
    StringLiteral_435/*"#494949"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PaymentHistoryDialog___ctor(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog___ctor((TextLabelScrollDialog_o *)this, 0LL);
}


void __fastcall PaymentHistoryDialog__Init(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *paymentHistoryListViewManager; // x0

  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0LL);
  paymentHistoryListViewManager = (ListViewManager_o *)this->fields.paymentHistoryListViewManager;
  if ( !paymentHistoryListViewManager )
    sub_1BCAA3C(0LL, v3);
  ListViewManager__DestroyList(paymentHistoryListViewManager, 0LL);
}


void __fastcall PaymentHistoryDialog__OnClickClose(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_4B12558 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PaymentHistoryDialog_OnClickClose__, v5, v6);
    sub_1BCA7E0(&Method_PaymentHistoryDialog__OnClickClose_b__16_0__, v7, v8);
    byte_4B12558 = 1;
  }
  if ( !this->fields.state )
  {
    v9 = Method_PaymentHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PaymentHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_PaymentHistoryDialog_OnClickClose__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  }
  this->fields.state = 2;
  v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PaymentHistoryDialog__OnClickClose_b__16_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall PaymentHistoryDialog__OnClickReflect(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  _QWORD *v14; // x0
  _BOOL4 canReflect; // w20
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x1
  PaymentHistoryDialog_c *v18; // x0
  __int64 v19; // x1
  UIButtonColor_o *reflectButtonColor; // x0
  PaymentHistoryDialog_o *v21; // x0
  const MethodInfo *v22; // x1
  System_Collections_IEnumerator_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  __int64 v28; // x1
  UnityEngine_Color_o v29; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4B12557 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_PaymentHistoryRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_PaymentHistoryDialog_OnClickReflect__, v6, v7);
    sub_1BCA7E0(&Method_PaymentHistoryDialog__OnClickReflect_b__15_0__, v8, v9);
    sub_1BCA7E0(&PaymentHistoryDialog_TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
    byte_4B12557 = 1;
  }
  v14 = Method_PaymentHistoryDialog_OnClickReflect__;
  *(_QWORD *)&v29.fields.r = 0LL;
  *(_QWORD *)&v29.fields.b = 0LL;
  canReflect = this->fields.canReflect;
  if ( (*((_BYTE *)Method_PaymentHistoryDialog_OnClickReflect__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BCA7F8(Method_PaymentHistoryDialog_OnClickReflect__);
  v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
  if ( canReflect )
  {
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
    v18 = PaymentHistoryDialog_TypeInfo;
    if ( !PaymentHistoryDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PaymentHistoryDialog_TypeInfo, v17);
      v18 = PaymentHistoryDialog_TypeInfo;
    }
    UnityEngine_ColorUtility__TryParseHtmlString(v18->static_fields->REFLECT_BUTTON_DISABLED_COLOR_CODE, &v29, 0LL);
    reflectButtonColor = this->fields.reflectButtonColor;
    if ( !reflectButtonColor )
      goto LABEL_17;
    ((void (__fastcall *)(UIButtonColor_o *, __int64, __int64, void *))reflectButtonColor->klass->vtable._14_SetState.method)(
      reflectButtonColor,
      3LL,
      1LL,
      reflectButtonColor->klass[1]._1.image);
    reflectButtonColor = this->fields.reflectButtonColor;
    if ( !reflectButtonColor )
      goto LABEL_17;
    UIButtonColor__set_defaultColor(reflectButtonColor, v29, 0LL);
    reflectButtonColor = this->fields.reflectButtonColor;
    if ( !reflectButtonColor )
      goto LABEL_17;
    v21 = (PaymentHistoryDialog_o *)((__int64 (__fastcall *)(UIButtonColor_o *, _QWORD, Il2CppMethodPointer))reflectButtonColor->klass->vtable._5_set_isEnabled.method)(
                                      reflectButtonColor,
                                      0LL,
                                      reflectButtonColor->klass->vtable._6_OnInit.methodPtr);
    this->fields.isRemainFlag = 1;
    v23 = PaymentHistoryDialog__WaitExternalPayment(v21, v22);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
    v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v24, v25, v26);
    NetworkManager_ResultCallbackFunc___ctor(
      v27,
      (Il2CppObject *)this,
      Method_PaymentHistoryDialog__OnClickReflect_b__15_0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
    reflectButtonColor = (UIButtonColor_o *)NetworkManager__getRequest_object_(
                                              v27,
                                              (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
    if ( !reflectButtonColor )
LABEL_17:
      sub_1BCAA3C(reflectButtonColor, v19);
    PaymentHistoryRequest__beginRequest((PaymentHistoryRequest_o *)reflectButtonColor, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
  }
}


void __fastcall PaymentHistoryDialog__Open(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  System_String_o *v19; // x0
  UILabel_o *UpperMessageLabel; // x20
  System_String_o *paymentHistoryListViewManager; // x0
  const MethodInfo *v22; // x1
  UILabel_o *reflectMessageLabel; // x20
  __int64 v24; // x1
  UILabel_o *messageLabel; // x20
  __int64 v26; // x1
  UILabel_o *closeLabel; // x20
  UILabel_o *reflectButtonLabel; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B12554 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&string_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_10489/*"PAYMENT_HISTORY_REFLECT_MESSAGE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_10487/*"PAYMENT_HISTORY_NODATA"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_10488/*"PAYMENT_HISTORY_REFLECT_BUTTON"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_10493/*"PAYMENT_HISTORY_TITLE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_10494/*"PAYMENT_HISTORY_UPPER_MESSAGE"*/, v16, v17);
    byte_4B12554 = 1;
  }
  ((void (__fastcall *)(PaymentHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10493/*"PAYMENT_HISTORY_TITLE"*/, 0LL);
  TextLabelScrollDialog__Open(
    (TextLabelScrollDialog_o *)this,
    v19,
    string_TypeInfo->static_fields->Empty,
    0LL,
    0LL,
    0LL);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10494/*"PAYMENT_HISTORY_UPPER_MESSAGE"*/, 0LL);
  if ( !UpperMessageLabel )
    goto LABEL_22;
  UILabel__set_text(UpperMessageLabel, paymentHistoryListViewManager, 0LL);
  reflectMessageLabel = this->fields.reflectMessageLabel;
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10489/*"PAYMENT_HISTORY_REFLECT_MESSAGE"*/, 0LL);
  if ( !reflectMessageLabel )
    goto LABEL_22;
  UILabel__set_text(reflectMessageLabel, paymentHistoryListViewManager, 0LL);
  paymentHistoryListViewManager = (System_String_o *)this->fields.paymentHistoryListViewManager;
  if ( !paymentHistoryListViewManager )
    goto LABEL_22;
  PaymentHistoryListViewManager__CreateList((PaymentHistoryListViewManager_o *)paymentHistoryListViewManager, v22);
  paymentHistoryListViewManager = (System_String_o *)this->fields.paymentHistoryListViewManager;
  if ( !paymentHistoryListViewManager )
    goto LABEL_22;
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)paymentHistoryListViewManager, 0LL) <= 0 )
  {
    paymentHistoryListViewManager = (System_String_o *)this->fields.messageLabel;
    if ( paymentHistoryListViewManager )
    {
      paymentHistoryListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)paymentHistoryListViewManager,
                                                           0LL);
      if ( paymentHistoryListViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)paymentHistoryListViewManager, 1, 0LL);
        messageLabel = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
        paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10487/*"PAYMENT_HISTORY_NODATA"*/, 0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, paymentHistoryListViewManager, 0LL);
          goto LABEL_16;
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(paymentHistoryListViewManager, v22);
  }
LABEL_16:
  paymentHistoryListViewManager = (System_String_o *)this->fields.scrollView;
  if ( !paymentHistoryListViewManager )
    goto LABEL_22;
  HIDWORD(paymentHistoryListViewManager[3].monitor) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)paymentHistoryListViewManager, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_22;
  UILabel__set_text(closeLabel, paymentHistoryListViewManager, 0LL);
  reflectButtonLabel = this->fields.reflectButtonLabel;
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10488/*"PAYMENT_HISTORY_REFLECT_BUTTON"*/, 0LL);
  if ( !reflectButtonLabel )
    goto LABEL_22;
  UILabel__set_text(reflectButtonLabel, paymentHistoryListViewManager, 0LL);
  this->fields.closeAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.decideAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.decideAction, 0LL, v35, v36, v37, v38, v39, v40);
}


void __fastcall PaymentHistoryDialog__ResetScrollView(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *messageLabel; // x0
  __int64 v7; // x1
  UILabel_o *v8; // x20

  if ( (byte_4B12555 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10487/*"PAYMENT_HISTORY_NODATA"*/, v4, v5);
    byte_4B12555 = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_17;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.paymentHistoryListViewManager;
  if ( !messageLabel )
    goto LABEL_17;
  ListViewManager__DestroyList((ListViewManager_o *)messageLabel, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.paymentHistoryListViewManager;
  if ( !messageLabel )
    goto LABEL_17;
  PaymentHistoryListViewManager__CreateList((PaymentHistoryListViewManager_o *)messageLabel, method);
  messageLabel = (UnityEngine_Component_o *)this->fields.paymentHistoryListViewManager;
  if ( !messageLabel )
    goto LABEL_17;
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)messageLabel, 0LL) > 0 )
    goto LABEL_15;
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_17;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
  v8 = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  messageLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10487/*"PAYMENT_HISTORY_NODATA"*/, 0LL);
  if ( !v8 )
LABEL_17:
    sub_1BCAA3C(messageLabel, method);
  UILabel__set_text(v8, (System_String_o *)messageLabel, 0LL);
LABEL_15:
  messageLabel = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !messageLabel )
    goto LABEL_17;
  HIDWORD(messageLabel[3].monitor) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)messageLabel, 0LL);
}


void __fastcall PaymentHistoryDialog__Update(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  if ( this->fields.state != 2 )
    PaymentHistoryDialog__UpdateReflectButtonInfo(this, method);
}


void __fastcall PaymentHistoryDialog__UpdateReflectButtonInfo(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 ReflectRemain; // x0
  __int64 v15; // x1
  int64_t Time; // x0
  int64_t v17; // x20
  UIButtonColor_o *reflectButtonColor; // x0
  UILabel_o *reflectRemainLabel; // x21
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  _BOOL4 isRemainFlag; // w8
  PaymentHistoryDialog_c *v23; // x0
  int64_t remain; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12559 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&PaymentHistoryDialog_TypeInfo, v6, v7);
    sub_1BCA7E0(&PaymentHistoryRequest_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B12559 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, method);
  ReflectRemain = PaymentHistoryRequest__getReflectRemain(0LL);
  this->fields.remain = ReflectRemain;
  if ( ReflectRemain <= 0 )
  {
    if ( !this->fields.canReflect )
    {
      reflectButtonColor = this->fields.reflectButtonColor;
      this->fields.canReflect = 1;
      if ( !reflectButtonColor )
        goto LABEL_28;
      ((void (__fastcall *)(UIButtonColor_o *, _QWORD, __int64, void *))reflectButtonColor->klass->vtable._14_SetState.method)(
        reflectButtonColor,
        0LL,
        1LL,
        reflectButtonColor->klass[1]._1.image);
      reflectButtonColor = this->fields.reflectButtonColor;
      if ( !reflectButtonColor )
        goto LABEL_28;
      v26.fields.r = 1.0;
      v26.fields.g = 1.0;
      v26.fields.b = 1.0;
      v26.fields.a = 1.0;
      UIButtonColor__set_defaultColor(reflectButtonColor, v26, 0LL);
      reflectButtonColor = this->fields.reflectButtonColor;
      if ( !reflectButtonColor )
        goto LABEL_28;
      ((void (__fastcall *)(UIButtonColor_o *, __int64, Il2CppMethodPointer))reflectButtonColor->klass->vtable._5_set_isEnabled.method)(
        reflectButtonColor,
        1LL,
        reflectButtonColor->klass->vtable._6_OnInit.methodPtr);
      reflectButtonColor = (UIButtonColor_o *)this->fields.reflectRemainLabel;
      if ( !reflectButtonColor )
        goto LABEL_28;
      reflectButtonColor = (UIButtonColor_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)reflectButtonColor,
                                                0LL);
      if ( !reflectButtonColor )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)reflectButtonColor, 0, 0LL);
      reflectButtonColor = (UIButtonColor_o *)this->fields.reflectRemainLabel;
      if ( !reflectButtonColor )
        goto LABEL_28;
      UILabel__set_text((UILabel_o *)reflectButtonColor, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
  }
  else
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.reflectCheckTime != Time )
    {
      v17 = Time;
      reflectButtonColor = (UIButtonColor_o *)this->fields.reflectRemainLabel;
      this->fields.canReflect = 0;
      if ( !reflectButtonColor )
        goto LABEL_28;
      reflectButtonColor = (UIButtonColor_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)reflectButtonColor,
                                                0LL);
      if ( !reflectButtonColor )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)reflectButtonColor, 1, 0LL);
      reflectRemainLabel = this->fields.reflectRemainLabel;
      remain = this->fields.remain;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &remain);
      reflectButtonColor = (UIButtonColor_o *)System_String__Format((System_String_o *)StringLiteral_25238/*"{0}"*/, v20, 0LL);
      if ( !reflectRemainLabel )
        goto LABEL_28;
      UILabel__set_text(reflectRemainLabel, (System_String_o *)reflectButtonColor, 0LL);
      isRemainFlag = this->fields.isRemainFlag;
      this->fields.reflectCheckTime = v17;
      if ( !isRemainFlag )
      {
        v23 = PaymentHistoryDialog_TypeInfo;
        if ( !PaymentHistoryDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PaymentHistoryDialog_TypeInfo, v21);
          v23 = PaymentHistoryDialog_TypeInfo;
        }
        UnityEngine_ColorUtility__TryParseHtmlString(
          v23->static_fields->REFLECT_BUTTON_DISABLED_COLOR_CODE,
          &color,
          0LL);
        reflectButtonColor = this->fields.reflectButtonColor;
        if ( reflectButtonColor )
        {
          ((void (__fastcall *)(UIButtonColor_o *, __int64, __int64, void *))reflectButtonColor->klass->vtable._14_SetState.method)(
            reflectButtonColor,
            3LL,
            1LL,
            reflectButtonColor->klass[1]._1.image);
          reflectButtonColor = this->fields.reflectButtonColor;
          if ( reflectButtonColor )
          {
            UIButtonColor__set_defaultColor(reflectButtonColor, color, 0LL);
            reflectButtonColor = this->fields.reflectButtonColor;
            if ( reflectButtonColor )
            {
              ((void (__fastcall *)(UIButtonColor_o *, _QWORD, Il2CppMethodPointer))reflectButtonColor->klass->vtable._5_set_isEnabled.method)(
                reflectButtonColor,
                0LL,
                reflectButtonColor->klass->vtable._6_OnInit.methodPtr);
              this->fields.isRemainFlag = 1;
              return;
            }
          }
        }
LABEL_28:
        sub_1BCAA3C(reflectButtonColor, v15);
      }
    }
  }
}


System_Collections_IEnumerator_o *__fastcall PaymentHistoryDialog__WaitExternalPayment(
        PaymentHistoryDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x19

  if ( (byte_4B12556 & 1) == 0 )
  {
    sub_1BCA7E0(&PaymentHistoryDialog__WaitExternalPayment_d__14_TypeInfo, method, v2);
    byte_4B12556 = 1;
  }
  v4 = sub_1BCAA2C(PaymentHistoryDialog__WaitExternalPayment_d__14_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall PaymentHistoryDialog___OnClickClose_b__16_0(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 remain; // x20

  if ( (byte_4B1255B & 1) == 0 )
  {
    sub_1BCA7E0(&PaymentHistoryRequest_TypeInfo, method, v2);
    byte_4B1255B = 1;
  }
  remain = this->fields.remain;
  if ( remain >= 1 )
  {
    if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo, method);
    PaymentHistoryRequest__SetRemainTime(remain, 0LL);
  }
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  ((void (__fastcall *)(PaymentHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall PaymentHistoryDialog__WaitExternalPayment_d__14___ctor(
        PaymentHistoryDialog__WaitExternalPayment_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall PaymentHistoryDialog__WaitExternalPayment_d__14__MoveNext(
        PaymentHistoryDialog__WaitExternalPayment_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  PaymentHistoryDialog___c_c *v17; // x0
  System_Func_bool__o *_9__14_0; // x20
  Il2CppObject *v19; // x21
  struct PaymentHistoryDialog___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_WaitUntil_o *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int32_t v34; // w8

  if ( (byte_4B1255E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_PaymentHistoryDialog___c__WaitExternalPayment_b__14_0__, v6, v7);
    sub_1BCA7E0(&PaymentHistoryDialog___c_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v10, v11);
    byte_4B1255E = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v34 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
    PurchaseBehaviour__ActivateExternal(0LL);
    v17 = PaymentHistoryDialog___c_TypeInfo;
    if ( !PaymentHistoryDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PaymentHistoryDialog___c_TypeInfo, v14);
      v17 = PaymentHistoryDialog___c_TypeInfo;
    }
    _9__14_0 = v17->static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17, v14);
        v17 = PaymentHistoryDialog___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__14_0 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v14, v15, v16);
      System_Func_bool____ctor(_9__14_0, v19, Method_PaymentHistoryDialog___c__WaitExternalPayment_b__14_0__, 0LL);
      static_fields = PaymentHistoryDialog___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = _9__14_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
        (int64_t)_9__14_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    v27 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v14, v15, v16);
    UnityEngine_WaitUntil___ctor(v27, _9__14_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v27;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v27, v28, v29, v30, v31, v32, v33);
    v34 = 1;
    result = 1;
  }
  this->fields.__1__state = v34;
  return result;
}


Il2CppObject *__fastcall PaymentHistoryDialog__WaitExternalPayment_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        PaymentHistoryDialog__WaitExternalPayment_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn PaymentHistoryDialog__WaitExternalPayment_d__14__System_Collections_IEnumerator_Reset(
        PaymentHistoryDialog__WaitExternalPayment_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_PaymentHistoryDialog__WaitExternalPayment_d__14_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall PaymentHistoryDialog__WaitExternalPayment_d__14__System_Collections_IEnumerator_get_Current(
        PaymentHistoryDialog__WaitExternalPayment_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall PaymentHistoryDialog__WaitExternalPayment_d__14__System_IDisposable_Dispose(
        PaymentHistoryDialog__WaitExternalPayment_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PaymentHistoryDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1255C & 1) == 0 )
  {
    sub_1BCA7E0(&PaymentHistoryDialog___c_TypeInfo, v1, v2);
    byte_4B1255C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PaymentHistoryDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PaymentHistoryDialog___c_TypeInfo->static_fields->__9 = (struct PaymentHistoryDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PaymentHistoryDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall PaymentHistoryDialog___c___ctor(PaymentHistoryDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PaymentHistoryDialog___c___WaitExternalPayment_b__14_0(
        PaymentHistoryDialog___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseLogicExternal_c *v3; // x0

  if ( (byte_4B1255D & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicExternal_TypeInfo, method, v2);
    byte_4B1255D = 1;
  }
  v3 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo, method);
    v3 = PurchaseLogicExternal_TypeInfo;
  }
  return v3->static_fields->isEnd;
}