void SpendLimitMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  __int64 v9; // x19
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4D2A558 & 1) == 0 )
  {
    sub_1C94098(&SpendLimitMenu_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_1938/*"AGE_VEIFICATION_TYPE3"*/);
    sub_1C94098(&StringLiteral_1934/*"AGE_VEIFICATION_NONE"*/);
    sub_1C94098(&StringLiteral_1936/*"AGE_VEIFICATION_TYPE1"*/);
    sub_1C94098(&StringLiteral_1937/*"AGE_VEIFICATION_TYPE2"*/);
    byte_4D2A558 = 1;
  }
  v1 = sub_1C94140(string___TypeInfo, 4);
  if ( !v1 )
    sub_1C942F0(0, v2);
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_9;
  v10 = StringLiteral_1934/*"AGE_VEIFICATION_NONE"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_1934/*"AGE_VEIFICATION_NONE"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8);
  if ( *(_DWORD *)(v9 + 24) <= 1u
    || (v17 = StringLiteral_1936/*"AGE_VEIFICATION_TYPE1"*/,
        *(_QWORD *)(v9 + 40) = StringLiteral_1936/*"AGE_VEIFICATION_TYPE1"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16),
        *(_DWORD *)(v9 + 24) <= 2u)
    || (v24 = StringLiteral_1937/*"AGE_VEIFICATION_TYPE2"*/,
        *(_QWORD *)(v9 + 48) = StringLiteral_1937/*"AGE_VEIFICATION_TYPE2"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 48), v24, v18, v19, v20, v21, v22, v23),
        *(_DWORD *)(v9 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C942F8(v1);
  }
  v31 = StringLiteral_1938/*"AGE_VEIFICATION_TYPE3"*/;
  *(_QWORD *)(v9 + 56) = StringLiteral_1938/*"AGE_VEIFICATION_TYPE3"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 56), v31, v25, v26, v27, v28, v29, v30);
  SpendLimitMenu_TypeInfo->static_fields->typeTextList = (struct System_String_array *)v9;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)SpendLimitMenu_TypeInfo->static_fields, v9, v32, v33, v34, v35, v36, v37);
}


void SpendLimitMenu___ctor(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2A557 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D2A557 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SpendLimitMenu__Callback(SpendLimitMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct SpendLimitMenu_CallbackFunc_o *v9; // x19
  struct SpendLimitMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void SpendLimitMenu__Close(SpendLimitMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SpendLimitMenu__Close_39067900(this, 0, v2);
}


void SpendLimitMenu__Close_39067900(SpendLimitMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2A554 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SpendLimitMenu_EndClose__);
    byte_4D2A554 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SpendLimitMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void SpendLimitMenu__EndClose(SpendLimitMenu_o *this, const MethodInfo *method)
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

  SpendLimitMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C9403C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void SpendLimitMenu__EndOpen(SpendLimitMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void SpendLimitMenu__Init(SpendLimitMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4D2A552 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2A552 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
    sub_1C942F0(titleLabel, method);
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

  if ( (byte_4D2A551 & 1) == 0 )
  {
    sub_1C94098(&AgeVerificationMenu_TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    byte_4D2A551 = 1;
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

  if ( (byte_4D2A555 & 1) == 0 )
  {
    sub_1C94098(&Method_SpendLimitMenu_OnClickClose__);
    byte_4D2A555 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SpendLimitMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_SpendLimitMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SpendLimitMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  AgeVerificationMenu_c *v14; // x0
  int32_t AgeType; // w0
  UILabel_o *titleLabel; // x22
  int32_t v17; // w21
  UILabel_o *messageLabel; // x22
  System_String_o *v19; // x23
  SpendLimitMenu_c *v20; // x8
  struct System_String_array *typeTextList; // x8
  Il2CppObject *v22; // x21
  Il2CppObject *PriceInfo; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v25; // x20
  struct SpendLimitMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4D2A553 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AgeVerificationMenu_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SpendLimitMenu_EndOpen__);
    sub_1C94098(&SpendLimitMenu_TypeInfo);
    sub_1C94098(&StringLiteral_12323/*"SPEND_LIMIT_CLOSE"*/);
    sub_1C94098(&StringLiteral_12324/*"SPEND_LIMIT_MESSAGE"*/);
    sub_1C94098(&StringLiteral_12325/*"SPEND_LIMIT_TITLE"*/);
    byte_4D2A553 = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)p_callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    *((_DWORD *)p_callbackFunc - 2) = 0;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v14 = AgeVerificationMenu_TypeInfo;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v14);
    titleLabel = this->fields.titleLabel;
    v17 = AgeType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12325/*"SPEND_LIMIT_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_20;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12324/*"SPEND_LIMIT_MESSAGE"*/, 0);
    v19 = (System_String_o *)gameObject;
    v20 = SpendLimitMenu_TypeInfo;
    if ( !SpendLimitMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpendLimitMenu_TypeInfo);
      v20 = SpendLimitMenu_TypeInfo;
    }
    typeTextList = v20->static_fields->typeTextList;
    if ( !typeTextList )
      goto LABEL_20;
    if ( (unsigned int)v17 >= LODWORD(typeTextList->max_length) )
      sub_1C942F8(gameObject);
    v22 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[v17], 0);
    PriceInfo = (Il2CppObject *)LocalizationManager__GetPriceInfo(value, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_64459052(v19, v22, PriceInfo, 0);
    if ( !messageLabel
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12323/*"SPEND_LIMIT_CLOSE"*/, 0),
          !closeLabel) )
    {
LABEL_20:
      sub_1C942F0(gameObject, v13);
    }
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    this->fields.state = 1;
    v25 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_SpendLimitMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0, 0);
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

  if ( (byte_4D2A54F & 1) == 0 )
  {
    sub_1C94098(&SpendLimitMenu_CallbackFunc_TypeInfo);
    byte_4D2A54F = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  SpendLimitMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *SpendLimitMenu__get_closeBtnPath(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2A556 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_15700/*"Window/CloseButton"*/);
    byte_4D2A556 = 1;
  }
  return (System_String_o *)StringLiteral_15700/*"Window/CloseButton"*/;
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

  if ( (byte_4D2A550 & 1) == 0 )
  {
    sub_1C94098(&SpendLimitMenu_CallbackFunc_TypeInfo);
    byte_4D2A550 = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  SpendLimitMenu__IsLimitOver(v11, v12, v13);
}


void SpendLimitMenu_CallbackFunc___ctor(
        SpendLimitMenu_CallbackFunc_o *this,
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
  sub_1C9403C(
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
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC6CF8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC6CB8;
}


System_IAsyncResult_o *SpendLimitMenu_CallbackFunc__BeginInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C9404C(this, &v5, callback, object);
}


void SpendLimitMenu_CallbackFunc__EndInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void SpendLimitMenu_CallbackFunc__Invoke(SpendLimitMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}