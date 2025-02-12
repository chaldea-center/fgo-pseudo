void __fastcall LimitCountSealDialogComponent___ctor(LimitCountSealDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BB816A & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB816A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall LimitCountSealDialogComponent__Callback(
        LimitCountSealDialogComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct LimitCountSealDialogComponent_CallbackFunc_o *v9; // x19
  struct LimitCountSealDialogComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C13CC8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall LimitCountSealDialogComponent__Close(
        LimitCountSealDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4BB8168 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_LimitCountSealDialogComponent_EndClose__, v10);
    byte_4BB8168 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_LimitCountSealDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall LimitCountSealDialogComponent__EndClose(
        LimitCountSealDialogComponent_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  LimitCountSealDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C13CC8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall LimitCountSealDialogComponent__Init(LimitCountSealDialogComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4BB8166 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BB8166 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.btnLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C13F80(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall LimitCountSealDialogComponent__OpenLimitCountSealDialog(
        LimitCountSealDialogComponent_o *this,
        System_String_o *title,
        System_String_o *message,
        LimitCountSealDialogComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *btnLabel; // x20

  if ( (byte_4BB8167 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, title);
    sub_1C13D24(&StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, v12);
    byte_4BB8167 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)message,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, title, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, message, 0LL);
  btnLabel = this->fields.btnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
  if ( !btnLabel
    || (UILabel__set_text(btnLabel, (System_String_o *)titleLabel, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1C13F80(titleLabel, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall LimitCountSealDialogComponent__add_callbackFunc(
        LimitCountSealDialogComponent_o *this,
        LimitCountSealDialogComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct LimitCountSealDialogComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct LimitCountSealDialogComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  LimitCountSealDialogComponent_o *v11; // x0
  LimitCountSealDialogComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BB8164 & 1) == 0 )
  {
    sub_1C13D24(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo, value);
    byte_4BB8164 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (LimitCountSealDialogComponent_CallbackFunc_c *)v8->klass != LimitCountSealDialogComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
  LimitCountSealDialogComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall LimitCountSealDialogComponent__get_closeBtnPath(
        LimitCountSealDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB8169 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_15895/*"Window"*/, method);
    byte_4BB8169 = 1;
  }
  return (System_String_o *)StringLiteral_15895/*"Window"*/;
}


void __fastcall LimitCountSealDialogComponent__remove_callbackFunc(
        LimitCountSealDialogComponent_o *this,
        LimitCountSealDialogComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct LimitCountSealDialogComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct LimitCountSealDialogComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  LimitCountSealDialogComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BB8165 & 1) == 0 )
  {
    sub_1C13D24(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo, value);
    byte_4BB8165 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (LimitCountSealDialogComponent_CallbackFunc_c *)v8->klass != LimitCountSealDialogComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
  LimitCountSealDialogComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCountSealDialogComponent_CallbackFunc___ctor(
        LimitCountSealDialogComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C13DE4(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A59B9C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A59B5C;
}


System_IAsyncResult_o *__fastcall LimitCountSealDialogComponent_CallbackFunc__BeginInvoke(
        LimitCountSealDialogComponent_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C13CD8(this, &v5, callback, object);
}


void __fastcall LimitCountSealDialogComponent_CallbackFunc__EndInvoke(
        LimitCountSealDialogComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
}


void __fastcall LimitCountSealDialogComponent_CallbackFunc__Invoke(
        LimitCountSealDialogComponent_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}