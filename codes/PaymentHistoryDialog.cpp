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

  if ( (byte_4C1E1F8 & 1) == 0 )
  {
    sub_1C3B764(&PaymentHistoryDialog_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_416/*"#B7A37B"*/, v8);
    byte_4C1E1F8 = 1;
  }
  PaymentHistoryDialog_TypeInfo->static_fields->REFLECT_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_416/*"#B7A37B"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)PaymentHistoryDialog_TypeInfo->static_fields,
    StringLiteral_416/*"#B7A37B"*/,
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
    sub_1C3B9C0(0LL, v3);
  ListViewManager__DestroyList(paymentHistoryListViewManager, 0LL);
}


void __fastcall PaymentHistoryDialog__OnClickClose(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4C1E1F6 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_PaymentHistoryDialog_OnClickClose__, v3);
    sub_1C3B764(&Method_PaymentHistoryDialog__OnClickClose_b__16_0__, v4);
    byte_4C1E1F6 = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_PaymentHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PaymentHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_PaymentHistoryDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  }
  this->fields.state = 2;
  v7 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PaymentHistoryDialog__OnClickClose_b__16_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PaymentHistoryDialog__OnClickReflect(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  _BOOL4 canReflect; // w20
  System_Reflection_MethodBase_o *v10; // x0
  PaymentHistoryDialog_c *v11; // x0
  __int64 v12; // x1
  UIButtonColor_o *reflectButtonColor; // x0
  PaymentHistoryDialog_o *v14; // x0
  const MethodInfo *v15; // x1
  System_Collections_IEnumerator_o *v16; // x0
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4C1E1F5 & 1) == 0 )
  {
    sub_1C3B764(&Method_NetworkManager_getRequest_PaymentHistoryRequest___, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&Method_PaymentHistoryDialog_OnClickReflect__, v4);
    sub_1C3B764(&Method_PaymentHistoryDialog__OnClickReflect_b__15_0__, v5);
    sub_1C3B764(&PaymentHistoryDialog_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4C1E1F5 = 1;
  }
  v8 = Method_PaymentHistoryDialog_OnClickReflect__;
  *(_QWORD *)&v18.fields.r = 0LL;
  *(_QWORD *)&v18.fields.b = 0LL;
  canReflect = this->fields.canReflect;
  if ( (*((_BYTE *)Method_PaymentHistoryDialog_OnClickReflect__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C3B77C(Method_PaymentHistoryDialog_OnClickReflect__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C3B748(v8, v8[4]);
  if ( canReflect )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    v11 = PaymentHistoryDialog_TypeInfo;
    if ( !PaymentHistoryDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PaymentHistoryDialog_TypeInfo);
      v11 = PaymentHistoryDialog_TypeInfo;
    }
    UnityEngine_ColorUtility__TryParseHtmlString(v11->static_fields->REFLECT_BUTTON_DISABLED_COLOR_CODE, &v18, 0LL);
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
    UIButtonColor__set_defaultColor(reflectButtonColor, v18, 0LL);
    reflectButtonColor = this->fields.reflectButtonColor;
    if ( !reflectButtonColor )
      goto LABEL_17;
    v14 = (PaymentHistoryDialog_o *)((__int64 (__fastcall *)(UIButtonColor_o *, _QWORD, Il2CppMethodPointer))reflectButtonColor->klass->vtable._5_set_isEnabled.method)(
                                      reflectButtonColor,
                                      0LL,
                                      reflectButtonColor->klass->vtable._6_OnInit.methodPtr);
    this->fields.isRemainFlag = 1;
    v16 = PaymentHistoryDialog__WaitExternalPayment(v14, v15);
    UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_PaymentHistoryDialog__OnClickReflect_b__15_0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    reflectButtonColor = (UIButtonColor_o *)NetworkManager__getRequest_object_(
                                              v17,
                                              (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_PaymentHistoryRequest___);
    if ( !reflectButtonColor )
LABEL_17:
      sub_1C3B9C0(reflectButtonColor, v12);
    PaymentHistoryRequest__beginRequest((PaymentHistoryRequest_o *)reflectButtonColor, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0LL);
  }
}


void __fastcall PaymentHistoryDialog__Open(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x0
  UILabel_o *UpperMessageLabel; // x20
  System_String_o *paymentHistoryListViewManager; // x0
  const MethodInfo *v13; // x1
  UILabel_o *reflectMessageLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *closeLabel; // x20
  UILabel_o *reflectButtonLabel; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4C1E1F2 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&string_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_10559/*"PurePrismExchange"*/, v4);
    sub_1C3B764(&StringLiteral_10557/*"PurchaseState is UNSPECIFIED_STATE, no more details exists {M: GPUL.OPO}"*/, v5);
    sub_1C3B764(&StringLiteral_3799/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v6);
    sub_1C3B764(&StringLiteral_10558/*"Purchasing product asychronously: '{0}'"*/, v7);
    sub_1C3B764(&StringLiteral_10563/*"QA"*/, v8);
    sub_1C3B764(&StringLiteral_10564/*"QMap_Cap{0:D4}_Atlas"*/, v9);
    byte_4C1E1F2 = 1;
  }
  ((void (__fastcall *)(PaymentHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10563/*"QA"*/, 0LL);
  TextLabelScrollDialog__Open(
    (TextLabelScrollDialog_o *)this,
    v10,
    string_TypeInfo->static_fields->Empty,
    0LL,
    0LL,
    0LL);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10564/*"QMap_Cap{0:D4}_Atlas"*/, 0LL);
  if ( !UpperMessageLabel )
    goto LABEL_22;
  UILabel__set_text(UpperMessageLabel, paymentHistoryListViewManager, 0LL);
  reflectMessageLabel = this->fields.reflectMessageLabel;
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10559/*"PurePrismExchange"*/, 0LL);
  if ( !reflectMessageLabel )
    goto LABEL_22;
  UILabel__set_text(reflectMessageLabel, paymentHistoryListViewManager, 0LL);
  paymentHistoryListViewManager = (System_String_o *)this->fields.paymentHistoryListViewManager;
  if ( !paymentHistoryListViewManager )
    goto LABEL_22;
  PaymentHistoryListViewManager__CreateList((PaymentHistoryListViewManager_o *)paymentHistoryListViewManager, v13);
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10557/*"PurchaseState is UNSPECIFIED_STATE, no more details exists {M: GPUL.OPO}"*/, 0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, paymentHistoryListViewManager, 0LL);
          goto LABEL_16;
        }
      }
    }
LABEL_22:
    sub_1C3B9C0(paymentHistoryListViewManager, v13);
  }
LABEL_16:
  paymentHistoryListViewManager = (System_String_o *)this->fields.scrollView;
  if ( !paymentHistoryListViewManager )
    goto LABEL_22;
  HIDWORD(paymentHistoryListViewManager[3].monitor) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)paymentHistoryListViewManager, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_22;
  UILabel__set_text(closeLabel, paymentHistoryListViewManager, 0LL);
  reflectButtonLabel = this->fields.reflectButtonLabel;
  paymentHistoryListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10558/*"Purchasing product asychronously: '{0}'"*/, 0LL);
  if ( !reflectButtonLabel )
    goto LABEL_22;
  UILabel__set_text(reflectButtonLabel, paymentHistoryListViewManager, 0LL);
  this->fields.closeAction = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v18, v19, v20, v21, v22, v23);
  this->fields.decideAction = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.decideAction, 0LL, v24, v25, v26, v27, v28, v29);
}


void __fastcall PaymentHistoryDialog__ResetScrollView(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *messageLabel; // x0
  UILabel_o *v5; // x20

  if ( (byte_4C1E1F3 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_10557/*"PurchaseState is UNSPECIFIED_STATE, no more details exists {M: GPUL.OPO}"*/, v3);
    byte_4C1E1F3 = 1;
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
  v5 = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  messageLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10557/*"PurchaseState is UNSPECIFIED_STATE, no more details exists {M: GPUL.OPO}"*/, 0LL);
  if ( !v5 )
LABEL_17:
    sub_1C3B9C0(messageLabel, method);
  UILabel__set_text(v5, (System_String_o *)messageLabel, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 ReflectRemain; // x0
  __int64 v9; // x1
  int64_t Time; // x0
  int64_t v11; // x20
  UIButtonColor_o *reflectButtonColor; // x0
  UILabel_o *reflectRemainLabel; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  _BOOL4 isRemainFlag; // w8
  PaymentHistoryDialog_c *v19; // x0
  int64_t remain; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C1E1F7 & 1) == 0 )
  {
    sub_1C3B764(&long_TypeInfo, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&PaymentHistoryDialog_TypeInfo, v4);
    sub_1C3B764(&PaymentHistoryRequest_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_25497, v6);
    sub_1C3B764(&StringLiteral_1/*""*/, v7);
    byte_4C1E1F7 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
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
      v22.fields.r = 1.0;
      v22.fields.g = 1.0;
      v22.fields.b = 1.0;
      v22.fields.a = 1.0;
      UIButtonColor__set_defaultColor(reflectButtonColor, v22, 0LL);
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
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.reflectCheckTime != Time )
    {
      v11 = Time;
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
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &remain, v14, v15, v16);
      reflectButtonColor = (UIButtonColor_o *)System_String__Format((System_String_o *)StringLiteral_25497, v17, 0LL);
      if ( !reflectRemainLabel )
        goto LABEL_28;
      UILabel__set_text(reflectRemainLabel, (System_String_o *)reflectButtonColor, 0LL);
      isRemainFlag = this->fields.isRemainFlag;
      this->fields.reflectCheckTime = v11;
      if ( !isRemainFlag )
      {
        v19 = PaymentHistoryDialog_TypeInfo;
        if ( !PaymentHistoryDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PaymentHistoryDialog_TypeInfo);
          v19 = PaymentHistoryDialog_TypeInfo;
        }
        UnityEngine_ColorUtility__TryParseHtmlString(
          v19->static_fields->REFLECT_BUTTON_DISABLED_COLOR_CODE,
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
        sub_1C3B9C0(reflectButtonColor, v9);
      }
    }
  }
}


System_Collections_IEnumerator_o *__fastcall PaymentHistoryDialog__WaitExternalPayment(
        PaymentHistoryDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4C1E1F4 & 1) == 0 )
  {
    sub_1C3B764(&PaymentHistoryDialog__WaitExternalPayment_d__14_TypeInfo, method);
    byte_4C1E1F4 = 1;
  }
  v2 = sub_1C3B9B0(PaymentHistoryDialog__WaitExternalPayment_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void __fastcall PaymentHistoryDialog___OnClickClose_b__16_0(PaymentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 remain; // x20

  if ( (byte_4C1E1F9 & 1) == 0 )
  {
    sub_1C3B764(&PaymentHistoryRequest_TypeInfo, method);
    byte_4C1E1F9 = 1;
  }
  remain = this->fields.remain;
  if ( remain >= 1 )
  {
    if ( !PaymentHistoryRequest_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PaymentHistoryRequest_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  bool result; // w0
  PaymentHistoryDialog___c_c *v9; // x0
  System_Func_bool__o *_9__14_0; // x20
  Il2CppObject *v11; // x21
  struct PaymentHistoryDialog___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_WaitUntil_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t v26; // w8

  if ( (byte_4C1E1FC & 1) == 0 )
  {
    sub_1C3B764(&System_Func_bool__TypeInfo, method);
    sub_1C3B764(&PurchaseBehaviour_TypeInfo, v3);
    sub_1C3B764(&Method_PaymentHistoryDialog___c__WaitExternalPayment_b__14_0__, v4);
    sub_1C3B764(&PaymentHistoryDialog___c_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4C1E1FC = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v26 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__ActivateExternal(0LL);
    v9 = PaymentHistoryDialog___c_TypeInfo;
    if ( !PaymentHistoryDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PaymentHistoryDialog___c_TypeInfo);
      v9 = PaymentHistoryDialog___c_TypeInfo;
    }
    _9__14_0 = v9->static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = PaymentHistoryDialog___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__14_0 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__14_0, v11, Method_PaymentHistoryDialog___c__WaitExternalPayment_b__14_0__, 0LL);
      static_fields = PaymentHistoryDialog___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = _9__14_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
        (int64_t)_9__14_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    v19 = (UnityEngine_WaitUntil_o *)sub_1C3B9B0(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v19, _9__14_0, 0LL);
    this->fields.__2__current = (Il2CppObject *)v19;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v19, v20, v21, v22, v23, v24, v25);
    v26 = 1;
    result = 1;
  }
  this->fields.__1__state = v26;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_PaymentHistoryDialog__WaitExternalPayment_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1E1FA & 1) == 0 )
  {
    sub_1C3B764(&PaymentHistoryDialog___c_TypeInfo, v1);
    byte_4C1E1FA = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(PaymentHistoryDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PaymentHistoryDialog___c_TypeInfo->static_fields->__9 = (struct PaymentHistoryDialog___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)PaymentHistoryDialog___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall PaymentHistoryDialog___c___ctor(PaymentHistoryDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PaymentHistoryDialog___c___WaitExternalPayment_b__14_0(
        PaymentHistoryDialog___c_o *this,
        const MethodInfo *method)
{
  PurchaseLogicExternal_c *v2; // x0

  if ( (byte_4C1E1FB & 1) == 0 )
  {
    sub_1C3B764(&PurchaseLogicExternal_TypeInfo, method);
    byte_4C1E1FB = 1;
  }
  v2 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v2 = PurchaseLogicExternal_TypeInfo;
  }
  return v2->static_fields->isEnd;
}