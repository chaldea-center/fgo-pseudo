void SpendLimitMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  const MethodInfo *v4; // x3
  __int64 v5; // x19
  int32_t v6; // w1
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C24BBE & 1) == 0 )
  {
    sub_1C2D490(&SpendLimitMenu_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1941/*"AGE_VEIFICATION_TYPE3"*/);
    sub_1C2D490(&StringLiteral_1937/*"AGE_VEIFICATION_NONE"*/);
    sub_1C2D490(&StringLiteral_1939/*"AGE_VEIFICATION_TYPE1"*/);
    sub_1C2D490(&StringLiteral_1940/*"AGE_VEIFICATION_TYPE2"*/);
    byte_4C24BBE = 1;
  }
  v1 = sub_1C2D538(string___TypeInfo, 4);
  if ( !v1 )
    sub_1C2D6EC(0, v2);
  v5 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_9;
  v6 = StringLiteral_1937/*"AGE_VEIFICATION_NONE"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_1937/*"AGE_VEIFICATION_NONE"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v1 + 32), v6, v3, v4);
  if ( *(_DWORD *)(v5 + 24) <= 1u
    || (v8 = StringLiteral_1939/*"AGE_VEIFICATION_TYPE1"*/,
        *(_QWORD *)(v5 + 40) = StringLiteral_1939/*"AGE_VEIFICATION_TYPE1"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), v8, v3, v7),
        *(_DWORD *)(v5 + 24) <= 2u)
    || (v10 = StringLiteral_1940/*"AGE_VEIFICATION_TYPE2"*/,
        *(_QWORD *)(v5 + 48) = StringLiteral_1940/*"AGE_VEIFICATION_TYPE2"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 48), v10, v3, v9),
        *(_DWORD *)(v5 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C2D6F4(v1, v2, v3);
  }
  v12 = StringLiteral_1941/*"AGE_VEIFICATION_TYPE3"*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_1941/*"AGE_VEIFICATION_TYPE3"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 56), v12, v3, v11);
  SpendLimitMenu_TypeInfo->static_fields->typeTextList = (struct System_String_array *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)SpendLimitMenu_TypeInfo->static_fields, v5, v13, v14);
}


void SpendLimitMenu___ctor(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C24BBD & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C24BBD = 1;
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
    sub_1C2D434(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void SpendLimitMenu__Close(SpendLimitMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SpendLimitMenu__Close_37542952(this, 0, v2);
}


void SpendLimitMenu__Close_37542952(SpendLimitMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C24BBA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SpendLimitMenu_EndClose__);
    byte_4C24BBA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
    sub_1C2D434(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4C24BB8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24BB8 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
    sub_1C2D6EC(titleLabel, method);
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

  if ( (byte_4C24BB7 & 1) == 0 )
  {
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    byte_4C24BB7 = 1;
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

  if ( (byte_4C24BBB & 1) == 0 )
  {
    sub_1C2D490(&Method_SpendLimitMenu_OnClickClose__);
    byte_4C24BBB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SpendLimitMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_SpendLimitMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SpendLimitMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  __int64 v9; // x1
  AgeVerificationMenu_c *v10; // x0
  int32_t AgeType; // w0
  UILabel_o *titleLabel; // x22
  int32_t v13; // w21
  UILabel_o *messageLabel; // x22
  __int64 v15; // x2
  System_String_o *v16; // x23
  SpendLimitMenu_c *v17; // x8
  struct System_String_array *typeTextList; // x8
  Il2CppObject *v19; // x21
  Il2CppObject *PriceInfo; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v22; // x20
  struct SpendLimitMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4C24BB9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AgeVerificationMenu_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SpendLimitMenu_EndOpen__);
    sub_1C2D490(&SpendLimitMenu_TypeInfo);
    sub_1C2D490(&StringLiteral_12267/*"SPEND_LIMIT_CLOSE"*/);
    sub_1C2D490(&StringLiteral_12268/*"SPEND_LIMIT_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_12269/*"SPEND_LIMIT_TITLE"*/);
    byte_4C24BB9 = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C2D434((CGThumbnailListItem_o *)p_callbackFunc, (int32_t)callback, (int32_t)callback, method);
    *((_DWORD *)p_callbackFunc - 2) = 0;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v10 = AgeVerificationMenu_TypeInfo;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v10);
    titleLabel = this->fields.titleLabel;
    v13 = AgeType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12269/*"SPEND_LIMIT_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_20;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12268/*"SPEND_LIMIT_MESSAGE"*/, 0);
    v16 = (System_String_o *)gameObject;
    v17 = SpendLimitMenu_TypeInfo;
    if ( !SpendLimitMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpendLimitMenu_TypeInfo);
      v17 = SpendLimitMenu_TypeInfo;
    }
    typeTextList = v17->static_fields->typeTextList;
    if ( !typeTextList )
      goto LABEL_20;
    if ( (unsigned int)v13 >= LODWORD(typeTextList->max_length) )
      sub_1C2D6F4(gameObject, v9, v15);
    v19 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[v13], 0);
    PriceInfo = (Il2CppObject *)LocalizationManager__GetPriceInfo(value, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_63499156(v16, v19, PriceInfo, 0);
    if ( !messageLabel
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12267/*"SPEND_LIMIT_CLOSE"*/, 0),
          !closeLabel) )
    {
LABEL_20:
      sub_1C2D6EC(gameObject, v9);
    }
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    this->fields.state = 1;
    v22 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_SpendLimitMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0);
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

  if ( (byte_4C24BB5 & 1) == 0 )
  {
    sub_1C2D490(&SpendLimitMenu_CallbackFunc_TypeInfo);
    byte_4C24BB5 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  SpendLimitMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *SpendLimitMenu__get_closeBtnPath(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C24BBC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15640/*"Window/CloseButton"*/);
    byte_4C24BBC = 1;
  }
  return (System_String_o *)StringLiteral_15640/*"Window/CloseButton"*/;
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

  if ( (byte_4C24BB6 & 1) == 0 )
  {
    sub_1C2D490(&SpendLimitMenu_CallbackFunc_TypeInfo);
    byte_4C24BB6 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6FB98;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6FB58;
}


System_IAsyncResult_o *SpendLimitMenu_CallbackFunc__BeginInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v5, callback, object);
}


void SpendLimitMenu_CallbackFunc__EndInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void SpendLimitMenu_CallbackFunc__Invoke(SpendLimitMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}