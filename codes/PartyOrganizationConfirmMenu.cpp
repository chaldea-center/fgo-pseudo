void PartyOrganizationConfirmMenu___cctor(const MethodInfo *method)
{
  if ( (byte_4CE9F66 & 1) == 0 )
  {
    sub_1C7BAE8(&PartyOrganizationConfirmMenu_TypeInfo);
    byte_4CE9F66 = 1;
  }
  *PartyOrganizationConfirmMenu_TypeInfo->static_fields = (struct PartyOrganizationConfirmMenu_StaticFields)0x140000001ELL;
}


void PartyOrganizationConfirmMenu___ctor(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CE9F65 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE9F65 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmMenu__Callback(
        PartyOrganizationConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmMenu_CallbackFunc_o *v9; // x20
  struct PartyOrganizationConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void PartyOrganizationConfirmMenu__Close(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMenu__Close_34608992(this, 0, v2);
}


void PartyOrganizationConfirmMenu__Close_34608992(
        PartyOrganizationConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CE9F62 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationConfirmMenu_EndClose__);
    byte_4CE9F62 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void PartyOrganizationConfirmMenu__EndClose(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4CE9F60 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9F60 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.cancelLabel) == 0) )
  {
    sub_1C7BD40(messageLabel, method);
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

  if ( (byte_4CE9F64 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PartyOrganizationConfirmMenu_OnClickCancel__);
    byte_4CE9F64 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_PartyOrganizationConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    PartyOrganizationConfirmMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmMenu__OnClickDecide(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t kind; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4CE9F63 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PartyOrganizationConfirmMenu_OnClickDecide__);
    byte_4CE9F63 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    kind = this->fields.kind;
    v4 = Method_PartyOrganizationConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C7BB00(Method_PartyOrganizationConfirmMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * (kind == 1), 0, 0);
    PartyOrganizationConfirmMenu__Callback(this, 1, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationConfirmMenu__Open(
        PartyOrganizationConfirmMenu_o *this,
        int32_t kind,
        System_String_o *message,
        PartyOrganizationConfirmMenu_CallbackFunc_o *callback,
        bool isFriendChocolate,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  PartyOrganizationConfirmMenu_c *v15; // x0
  int32_t *static_fields; // x8
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v19; // x20

  if ( (byte_4CE9F61 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationConfirmMenu_EndOpen__);
    sub_1C7BAE8(&PartyOrganizationConfirmMenu_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2961/*"BOOST_ITEM_USE_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_2962/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/);
    byte_4CE9F61 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)message,
      (int32_t)callback,
      (System_String_o *)isFriendChocolate,
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
LABEL_15:
        this->fields.state = 1;
        v19 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyOrganizationConfirmMenu_EndOpen__, 0);
        BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0, 0);
        return;
      }
      v15 = PartyOrganizationConfirmMenu_TypeInfo;
      if ( !PartyOrganizationConfirmMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMenu_TypeInfo);
        v15 = PartyOrganizationConfirmMenu_TypeInfo;
      }
      static_fields = (int32_t *)v15->static_fields;
      if ( isFriendChocolate )
        ++static_fields;
      WrapControlText__textAdjust(this->fields.messageLabel, message, *static_fields, 0, 0);
      decideLabel = this->fields.decideLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2962/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2961/*"BOOST_ITEM_USE_CONFIRM_CANCEL"*/, 0);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
          goto LABEL_15;
        }
      }
    }
    sub_1C7BD40(gameObject, v14);
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
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmMenu_o *v11; // x0
  PartyOrganizationConfirmMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CE9F5E & 1) == 0 )
  {
    sub_1C7BAE8(&PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo);
    byte_4CE9F5E = 1;
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
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMenu_o *)sub_1C7C0DC(v8);
  PartyOrganizationConfirmMenu__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CE9F5F & 1) == 0 )
  {
    sub_1C7BAE8(&PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo);
    byte_4CE9F5F = 1;
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
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMenu_o *)sub_1C7C0DC(v8);
  PartyOrganizationConfirmMenu__Init(v11, v12);
}


void PartyOrganizationConfirmMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAB9A4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAB95C;
}


System_IAsyncResult_o *PartyOrganizationConfirmMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CE9F67 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CE9F67 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void PartyOrganizationConfirmMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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