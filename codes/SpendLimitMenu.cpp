void SpendLimitMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x19
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C351B3 & 1) == 0 )
  {
    sub_1C32C20(&SpendLimitMenu_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1942/*"AGE_VEIFICATION_TYPE3"*/);
    sub_1C32C20(&StringLiteral_1938/*"AGE_VEIFICATION_NONE"*/);
    sub_1C32C20(&StringLiteral_1940/*"AGE_VEIFICATION_TYPE1"*/);
    sub_1C32C20(&StringLiteral_1941/*"AGE_VEIFICATION_TYPE2"*/);
    byte_4C351B3 = 1;
  }
  v1 = sub_1C32CC8(string___TypeInfo, 4);
  if ( !v1 )
    sub_1C32E7C(0);
  v4 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_9;
  v5 = StringLiteral_1938/*"AGE_VEIFICATION_NONE"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_1938/*"AGE_VEIFICATION_NONE"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v1 + 32), v5, v2, v3);
  if ( *(_DWORD *)(v4 + 24) <= 1u
    || (v8 = StringLiteral_1940/*"AGE_VEIFICATION_TYPE1"*/,
        *(_QWORD *)(v4 + 40) = StringLiteral_1940/*"AGE_VEIFICATION_TYPE1"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 40), v8, v6, v7),
        *(_DWORD *)(v4 + 24) <= 2u)
    || (v11 = StringLiteral_1941/*"AGE_VEIFICATION_TYPE2"*/,
        *(_QWORD *)(v4 + 48) = StringLiteral_1941/*"AGE_VEIFICATION_TYPE2"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 48), v11, v9, v10),
        *(_DWORD *)(v4 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C32E84(v1);
  }
  v14 = StringLiteral_1942/*"AGE_VEIFICATION_TYPE3"*/;
  *(_QWORD *)(v4 + 56) = StringLiteral_1942/*"AGE_VEIFICATION_TYPE3"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 56), v14, v12, v13);
  SpendLimitMenu_TypeInfo->static_fields->typeTextList = (struct System_String_array *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)SpendLimitMenu_TypeInfo->static_fields, v4, v15, v16);
}


void SpendLimitMenu___ctor(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C351B2 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C351B2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SpendLimitMenu__Callback(SpendLimitMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct SpendLimitMenu_CallbackFunc_o *v5; // x19
  struct SpendLimitMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C32BC4(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void SpendLimitMenu__Close(SpendLimitMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SpendLimitMenu__Close_37566772(this, 0, v2);
}


void SpendLimitMenu__Close_37566772(SpendLimitMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C351AF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SpendLimitMenu_EndClose__);
    byte_4C351AF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SpendLimitMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void SpendLimitMenu__EndClose(SpendLimitMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SpendLimitMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C32BC4(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void SpendLimitMenu__EndOpen(SpendLimitMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void SpendLimitMenu__Init(SpendLimitMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C351AD & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C351AD = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
    sub_1C32E7C(titleLabel);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool SpendLimitMenu__IsLimitOver(SpendLimitMenu_o *this, int32_t value, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  AgeVerificationMenu_c *v6; // x0
  int32_t Limit; // w0

  if ( (byte_4C351AC & 1) == 0 )
  {
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    byte_4C351AC = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    return 1;
  v6 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  Limit = AgeVerificationMenu__GetLimit((const MethodInfo *)v6);
  return Limit >= 0 && Limit < value;
}


void SpendLimitMenu__OnClickClose(SpendLimitMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C351B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_SpendLimitMenu_OnClickClose__);
    byte_4C351B0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SpendLimitMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_SpendLimitMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_SpendLimitMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SpendLimitMenu__Callback(this, v5);
  }
}


void SpendLimitMenu__Open(
        SpendLimitMenu_o *this,
        int32_t value,
        SpendLimitMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  AgeVerificationMenu_c *v9; // x0
  int32_t AgeType; // w0
  UILabel_o *titleLabel; // x22
  int32_t v12; // w21
  UILabel_o *messageLabel; // x22
  System_String_o *v14; // x23
  SpendLimitMenu_c *v15; // x8
  struct System_String_array *typeTextList; // x8
  Il2CppObject *v17; // x21
  Il2CppObject *PriceInfo; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v20; // x20
  struct SpendLimitMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4C351AE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AgeVerificationMenu_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SpendLimitMenu_EndOpen__);
    sub_1C32C20(&SpendLimitMenu_TypeInfo);
    sub_1C32C20(&StringLiteral_12270/*"SPEND_LIMIT_CLOSE"*/);
    sub_1C32C20(&StringLiteral_12271/*"SPEND_LIMIT_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_12272/*"SPEND_LIMIT_TITLE"*/);
    byte_4C351AE = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C32BC4((CGThumbnailListItem_o *)p_callbackFunc, (int32_t)callback, (int32_t)callback, method);
    *((_DWORD *)p_callbackFunc - 2) = 0;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v9 = AgeVerificationMenu_TypeInfo;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v9);
    titleLabel = this->fields.titleLabel;
    v12 = AgeType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12272/*"SPEND_LIMIT_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_20;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12271/*"SPEND_LIMIT_MESSAGE"*/, 0);
    v14 = (System_String_o *)gameObject;
    v15 = SpendLimitMenu_TypeInfo;
    if ( !SpendLimitMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpendLimitMenu_TypeInfo);
      v15 = SpendLimitMenu_TypeInfo;
    }
    typeTextList = v15->static_fields->typeTextList;
    if ( !typeTextList )
      goto LABEL_20;
    if ( (unsigned int)v12 >= LODWORD(typeTextList->max_length) )
      sub_1C32E84(gameObject);
    v17 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[v12], 0);
    PriceInfo = (Il2CppObject *)LocalizationManager__GetPriceInfo(value, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_63559836(v14, v17, PriceInfo, 0);
    if ( !messageLabel
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12270/*"SPEND_LIMIT_CLOSE"*/, 0),
          !closeLabel) )
    {
LABEL_20:
      sub_1C32E7C(gameObject);
    }
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    this->fields.state = 1;
    v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SpendLimitMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0, 0);
  }
}


void SpendLimitMenu__add_callbackFunc(
        SpendLimitMenu_o *this,
        SpendLimitMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SpendLimitMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SpendLimitMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SpendLimitMenu_o *v11; // x0
  SpendLimitMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C351AA & 1) == 0 )
  {
    sub_1C32C20(&SpendLimitMenu_CallbackFunc_TypeInfo);
    byte_4C351AA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SpendLimitMenu_CallbackFunc_c *)v8->klass != SpendLimitMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  SpendLimitMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *SpendLimitMenu__get_closeBtnPath(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C351B1 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15641/*"Window/CloseButton"*/);
    byte_4C351B1 = 1;
  }
  return (System_String_o *)StringLiteral_15641/*"Window/CloseButton"*/;
}


void SpendLimitMenu__remove_callbackFunc(
        SpendLimitMenu_o *this,
        SpendLimitMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SpendLimitMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SpendLimitMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SpendLimitMenu_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_4C351AB & 1) == 0 )
  {
    sub_1C32C20(&SpendLimitMenu_CallbackFunc_TypeInfo);
    byte_4C351AB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SpendLimitMenu_CallbackFunc_c *)v8->klass != SpendLimitMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  SpendLimitMenu__IsLimitOver(v11, v12, v13);
}


void SpendLimitMenu_CallbackFunc___ctor(
        SpendLimitMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A75194;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A75154;
}


System_IAsyncResult_o *SpendLimitMenu_CallbackFunc__BeginInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v5, callback, object);
}


void SpendLimitMenu_CallbackFunc__EndInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void SpendLimitMenu_CallbackFunc__Invoke(SpendLimitMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}