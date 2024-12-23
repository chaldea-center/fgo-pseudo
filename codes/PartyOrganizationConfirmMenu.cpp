void __fastcall PartyOrganizationConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B6286F & 1) == 0 )
  {
    sub_1BE4ACC(&PartyOrganizationConfirmMenu_TypeInfo, v1);
    byte_4B6286F = 1;
  }
  *PartyOrganizationConfirmMenu_TypeInfo->static_fields = (struct PartyOrganizationConfirmMenu_StaticFields)0x140000001ELL;
}


void __fastcall PartyOrganizationConfirmMenu___ctor(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4B6286E & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B6286E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmMenu__Callback(
        PartyOrganizationConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct PartyOrganizationConfirmMenu_CallbackFunc_o *v4; // x20
  struct PartyOrganizationConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1BE4A70(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationConfirmMenu__Close(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMenu__Close_32694492(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMenu__Close_32694492(
        PartyOrganizationConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4B6286B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_PartyOrganizationConfirmMenu_EndClose__, v5);
    byte_4B6286B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BE4A70(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall PartyOrganizationConfirmMenu__EndClose(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BE4A70(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationConfirmMenu__EndOpen(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationConfirmMenu__Init(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4B62869 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B62869 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.cancelLabel) == 0LL) )
  {
    sub_1BE4D28(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmMenu__OnClickCancel(
        PartyOrganizationConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B6286D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyOrganizationConfirmMenu_OnClickCancel__, method);
    byte_4B6286D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    PartyOrganizationConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmMenu__OnClickDecide(
        PartyOrganizationConfirmMenu_o *this,
        const MethodInfo *method)
{
  int32_t kind; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B6286C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyOrganizationConfirmMenu_OnClickDecide__, method);
    byte_4B6286C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    kind = this->fields.kind;
    v4 = Method_PartyOrganizationConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationConfirmMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * (kind == 1), 0LL);
    PartyOrganizationConfirmMenu__Callback(this, 1, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmMenu__Open(
        PartyOrganizationConfirmMenu_o *this,
        int32_t kind,
        System_String_o *message,
        PartyOrganizationConfirmMenu_CallbackFunc_o *callback,
        bool isFriendChocolate,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  PartyOrganizationConfirmMenu_c *v18; // x0
  int32_t *static_fields; // x8
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v22; // x20

  if ( (byte_4B6286A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v11);
    sub_1BE4ACC(&Method_PartyOrganizationConfirmMenu_EndOpen__, v12);
    sub_1BE4ACC(&PartyOrganizationConfirmMenu_TypeInfo, v13);
    sub_1BE4ACC(&StringLiteral_3093/*"BOOST_ITEM_USE_CONFIRM_CANCEL"*/, v14);
    sub_1BE4ACC(&StringLiteral_3094/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, v15);
    byte_4B6286A = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1BE4A70(&this->fields.callbackFunc);
    this->fields.kind = kind;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      if ( this->fields.kind != 1 )
      {
LABEL_15:
        this->fields.state = 1;
        v22 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(v22, (Il2CppObject *)this, Method_PartyOrganizationConfirmMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0LL);
        return;
      }
      v18 = PartyOrganizationConfirmMenu_TypeInfo;
      if ( !PartyOrganizationConfirmMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMenu_TypeInfo);
        v18 = PartyOrganizationConfirmMenu_TypeInfo;
      }
      static_fields = (int32_t *)v18->static_fields;
      if ( isFriendChocolate )
        ++static_fields;
      WrapControlText__textAdjust(this->fields.messageLabel, message, *static_fields, 0, 0LL);
      decideLabel = this->fields.decideLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3094/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3093/*"BOOST_ITEM_USE_CONFIRM_CANCEL"*/, 0LL);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
          goto LABEL_15;
        }
      }
    }
    sub_1BE4D28(gameObject, v17);
  }
}


void __fastcall PartyOrganizationConfirmMenu__add_callbackFunc(
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

  if ( (byte_4B62867 & 1) == 0 )
  {
    sub_1BE4ACC(&PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4B62867 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMenu_o *)sub_1BE4FE8(v8);
  PartyOrganizationConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationConfirmMenu__remove_callbackFunc(
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

  if ( (byte_4B62868 & 1) == 0 )
  {
    sub_1BE4ACC(&PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4B62868 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmMenu_o *)sub_1BE4FE8(v8);
  PartyOrganizationConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A210CC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A21084;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationConfirmMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B62870 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, result);
    byte_4B62870 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall PartyOrganizationConfirmMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}