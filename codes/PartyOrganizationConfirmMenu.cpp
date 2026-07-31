void PartyOrganizationConfirmMenu___cctor(const MethodInfo *method)
{
  if ( (byte_5933EAD & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationConfirmMenu_TypeInfo);
    byte_5933EAD = 1;
  }
  *PartyOrganizationConfirmMenu_TypeInfo->static_fields = (struct PartyOrganizationConfirmMenu_StaticFields)0x140000001ELL;
}


void PartyOrganizationConfirmMenu___ctor(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5933EAC & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5933EAC = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmMenu__Callback(
        PartyOrganizationConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmMenu_CallbackFunc_o *v9; // x20
  struct PartyOrganizationConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void PartyOrganizationConfirmMenu__Close(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMenu__Close_40926872(this, 0, v2);
}


void PartyOrganizationConfirmMenu__Close_40926872(
        PartyOrganizationConfirmMenu_o *this,
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

  if ( (byte_5933EA9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationConfirmMenu_EndClose__);
    byte_5933EA9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void PartyOrganizationConfirmMenu__EndClose(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void PartyOrganizationConfirmMenu__EndOpen(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationConfirmMenu__Init(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_5933EA7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933EA7 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.cancelLabel) == 0) )
  {
    sub_21FFECC(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmMenu__OnClickCancel(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5933EAB & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationConfirmMenu_OnClickCancel__);
    byte_5933EAB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    PartyOrganizationConfirmMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmMenu__OnClickDecide(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t kind; // w9
  _QWORD *v4; // x0
  int32_t v5; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_5933EAA & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyOrganizationConfirmMenu_OnClickDecide__);
    byte_5933EAA = 1;
  }
  if ( this->fields.state == 2 )
  {
    kind = this->fields.kind;
    this->fields.state = 3;
    v4 = Method_PartyOrganizationConfirmMenu_OnClickDecide__;
    v5 = 8 * (kind == 1);
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_PartyOrganizationConfirmMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0, 0);
    PartyOrganizationConfirmMenu__Callback(this, 1, v7);
  }
}


void PartyOrganizationConfirmMenu__Open(
        PartyOrganizationConfirmMenu_o *this,
        int32_t kind,
        System_String_o *message,
        PartyOrganizationConfirmMenu_CallbackFunc_o *callback,
        bool isFriendChocolate,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  PartyOrganizationConfirmMenu_c *v17; // x0
  int v18; // w8
  int32_t *p_DETAIL_FONT_SIZE_FRIEND_CHOCOLATE; // x8
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v24; // x20

  if ( (byte_5933EA8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_PartyOrganizationConfirmMenu_EndOpen__);
    sub_21FFC50(&PartyOrganizationConfirmMenu_TypeInfo);
    sub_21FFC50(&StringLiteral_3079/*"BOOST_ITEM_USE_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_3080/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/);
    byte_5933EA8 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      message,
      (System_String_o *)callback,
      isFriendChocolate,
      (int32_t)method,
      v6,
      v7);
    this->fields.kind = kind;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      if ( this->fields.kind != 1 )
      {
LABEL_19:
        this->fields.state = 1;
        v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(v24, (Il2CppObject *)this, Method_PartyOrganizationConfirmMenu_EndOpen__, 0);
        BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0, 0);
        return;
      }
      v17 = PartyOrganizationConfirmMenu_TypeInfo;
      v18 = *(&PartyOrganizationConfirmMenu_TypeInfo->_2.cctor_finished + 1);
      if ( isFriendChocolate )
      {
        if ( !v18 )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMenu_TypeInfo, v15, v16);
          v17 = PartyOrganizationConfirmMenu_TypeInfo;
        }
        p_DETAIL_FONT_SIZE_FRIEND_CHOCOLATE = &v17->static_fields->DETAIL_FONT_SIZE_FRIEND_CHOCOLATE;
      }
      else
      {
        if ( !v18 )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMenu_TypeInfo, v15, v16);
          v17 = PartyOrganizationConfirmMenu_TypeInfo;
        }
        p_DETAIL_FONT_SIZE_FRIEND_CHOCOLATE = (int32_t *)v17->static_fields;
      }
      WrapControlText__textAdjust(this->fields.messageLabel, message, *p_DETAIL_FONT_SIZE_FRIEND_CHOCOLATE, 0, 0);
      decideLabel = this->fields.decideLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3080/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3079/*"BOOST_ITEM_USE_CONFIRM_CANCEL"*/, 0);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
          goto LABEL_19;
        }
      }
    }
    sub_21FFECC(gameObject, v14);
  }
}


void PartyOrganizationConfirmMenu__add_callbackFunc(
        PartyOrganizationConfirmMenu_o *this,
        PartyOrganizationConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationConfirmMenu_o *v13; // x0
  PartyOrganizationConfirmMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5933EA5 & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo);
    byte_5933EA5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationConfirmMenu_o *)sub_220024C(v8, PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo, v9, v10);
  PartyOrganizationConfirmMenu__remove_callbackFunc(v13, v14, v15);
}


void PartyOrganizationConfirmMenu__remove_callbackFunc(
        PartyOrganizationConfirmMenu_o *this,
        PartyOrganizationConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5933EA6 & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo);
    byte_5933EA6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationConfirmMenu_o *)sub_220024C(v8, PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo, v9, v10);
  PartyOrganizationConfirmMenu__Init(v13, v14);
}


void PartyOrganizationConfirmMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF15D0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF1588;
}


System_IAsyncResult_o *PartyOrganizationConfirmMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void PartyOrganizationConfirmMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void PartyOrganizationConfirmMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}