void __fastcall SpendLimitMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x19
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_49B8786 & 1) == 0 )
  {
    sub_1B4CF90(&SpendLimitMenu_TypeInfo, v1);
    sub_1B4CF90(&string___TypeInfo, v2);
    sub_1B4CF90(&StringLiteral_1950/*"AGE_VEIFICATION_TYPE3"*/, v3);
    sub_1B4CF90(&StringLiteral_1946/*"AGE_VEIFICATION_NONE"*/, v4);
    sub_1B4CF90(&StringLiteral_1948/*"AGE_VEIFICATION_TYPE1"*/, v5);
    sub_1B4CF90(&StringLiteral_1949/*"AGE_VEIFICATION_TYPE2"*/, v6);
    byte_49B8786 = 1;
  }
  v7 = sub_1B4D038(string___TypeInfo, 4LL);
  if ( !v7 )
    sub_1B4D1EC(0LL, v8);
  v11 = v7;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_9;
  v12 = StringLiteral_1946/*"AGE_VEIFICATION_NONE"*/;
  *(_QWORD *)(v7 + 32) = StringLiteral_1946/*"AGE_VEIFICATION_NONE"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 32), v12, v9, v10);
  if ( *(_DWORD *)(v11 + 24) <= 1u
    || (v15 = StringLiteral_1948/*"AGE_VEIFICATION_TYPE1"*/,
        *(_QWORD *)(v11 + 40) = StringLiteral_1948/*"AGE_VEIFICATION_TYPE1"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 40), v15, v13, v14),
        *(_DWORD *)(v11 + 24) <= 2u)
    || (v18 = StringLiteral_1949/*"AGE_VEIFICATION_TYPE2"*/,
        *(_QWORD *)(v11 + 48) = StringLiteral_1949/*"AGE_VEIFICATION_TYPE2"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 48), v18, v16, v17),
        *(_DWORD *)(v11 + 24) <= 3u) )
  {
LABEL_9:
    sub_1B4D1F4(v7, v8);
  }
  v21 = StringLiteral_1950/*"AGE_VEIFICATION_TYPE3"*/;
  *(_QWORD *)(v11 + 56) = StringLiteral_1950/*"AGE_VEIFICATION_TYPE3"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 56), v21, v19, v20);
  SpendLimitMenu_TypeInfo->static_fields->typeTextList = (struct System_String_array *)v11;
  sub_1B4CF34((CGThumbnailListItem_o *)SpendLimitMenu_TypeInfo->static_fields, v11, v22, v23);
}


void __fastcall SpendLimitMenu___ctor(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49B8785 & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49B8785 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SpendLimitMenu__Callback(SpendLimitMenu_o *this, const MethodInfo *method)
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
    p_callbackFunc->klass = 0LL;
    sub_1B4CF34(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall SpendLimitMenu__Close(SpendLimitMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SpendLimitMenu__Close_35520568(this, 0LL, v2);
}


void __fastcall SpendLimitMenu__Close_35520568(
        SpendLimitMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_49B8782 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&Method_SpendLimitMenu_EndClose__, v6);
    byte_49B8782 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SpendLimitMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SpendLimitMenu__EndClose(SpendLimitMenu_o *this, const MethodInfo *method)
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
    p_closeCallbackFunc->klass = 0LL;
    sub_1B4CF34(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall SpendLimitMenu__EndOpen(SpendLimitMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SpendLimitMenu__Init(SpendLimitMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_49B8780 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    byte_49B8780 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_1B4D1EC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpendLimitMenu__IsLimitOver(SpendLimitMenu_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  AgeVerificationMenu_c *v7; // x0
  int32_t Limit; // w0

  if ( (byte_49B877F & 1) == 0 )
  {
    sub_1B4CF90(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
    sub_1B4CF90(&ManagerConfig_TypeInfo, v4);
    byte_49B877F = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 1;
  v7 = AgeVerificationMenu_TypeInfo;
  if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  Limit = AgeVerificationMenu__GetLimit((const MethodInfo *)v7);
  return Limit >= 0 && Limit < value;
}


void __fastcall SpendLimitMenu__OnClickClose(SpendLimitMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49B8783 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SpendLimitMenu_OnClickClose__, method);
    byte_49B8783 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SpendLimitMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_SpendLimitMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_SpendLimitMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    SpendLimitMenu__Callback(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpendLimitMenu__Open(
        SpendLimitMenu_o *this,
        int32_t value,
        SpendLimitMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  AgeVerificationMenu_c *v17; // x0
  int32_t AgeType; // w0
  UILabel_o *titleLabel; // x22
  int32_t v20; // w21
  UILabel_o *messageLabel; // x22
  System_String_o *v22; // x23
  SpendLimitMenu_c *v23; // x8
  struct System_String_array *typeTextList; // x8
  Il2CppObject *v25; // x21
  Il2CppObject *PriceInfo; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v28; // x20
  struct SpendLimitMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_49B8781 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&value);
    sub_1B4CF90(&AgeVerificationMenu_TypeInfo, v7);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v8);
    sub_1B4CF90(&Method_SpendLimitMenu_EndOpen__, v9);
    sub_1B4CF90(&SpendLimitMenu_TypeInfo, v10);
    sub_1B4CF90(&StringLiteral_11993/*"SPEND_LIMIT_CLOSE"*/, v11);
    sub_1B4CF90(&StringLiteral_11994/*"SPEND_LIMIT_MESSAGE"*/, v12);
    sub_1B4CF90(&StringLiteral_11995/*"SPEND_LIMIT_TITLE"*/, v13);
    byte_49B8781 = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1B4CF34((CGThumbnailListItem_o *)p_callbackFunc, (int32_t)callback, (int32_t)callback, method);
    *((_DWORD *)p_callbackFunc - 2) = 0;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v17 = AgeVerificationMenu_TypeInfo;
    if ( !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v17);
    titleLabel = this->fields.titleLabel;
    v20 = AgeType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SPEND_LIMIT_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_20;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SPEND_LIMIT_MESSAGE"*/, 0LL);
    v22 = (System_String_o *)gameObject;
    v23 = SpendLimitMenu_TypeInfo;
    if ( !SpendLimitMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpendLimitMenu_TypeInfo);
      v23 = SpendLimitMenu_TypeInfo;
    }
    typeTextList = v23->static_fields->typeTextList;
    if ( !typeTextList )
      goto LABEL_20;
    if ( v20 >= typeTextList->max_length )
      sub_1B4D1F4(gameObject, v16);
    v25 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[v20], 0LL);
    PriceInfo = (Il2CppObject *)LocalizationManager__GetPriceInfo(value, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_61134760(v22, v25, PriceInfo, 0LL);
    if ( !messageLabel
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11993/*"SPEND_LIMIT_CLOSE"*/, 0LL),
          !closeLabel) )
    {
LABEL_20:
      sub_1B4D1EC(gameObject, v16);
    }
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    v28 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_SpendLimitMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0LL);
  }
}


void __fastcall SpendLimitMenu__add_callbackFunc(
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

  if ( (byte_49B877D & 1) == 0 )
  {
    sub_1B4CF90(&SpendLimitMenu_CallbackFunc_TypeInfo, value);
    byte_49B877D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SpendLimitMenu_CallbackFunc_c *)v8->klass != SpendLimitMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B4D4AC(v8);
  SpendLimitMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall SpendLimitMenu__get_closeBtnPath(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49B8784 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_15343/*"Window/CloseButton"*/, method);
    byte_49B8784 = 1;
  }
  return (System_String_o *)StringLiteral_15343/*"Window/CloseButton"*/;
}


void __fastcall SpendLimitMenu__remove_callbackFunc(
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

  if ( (byte_49B877E & 1) == 0 )
  {
    sub_1B4CF90(&SpendLimitMenu_CallbackFunc_TypeInfo, value);
    byte_49B877E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SpendLimitMenu_CallbackFunc_c *)v8->klass != SpendLimitMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B4D4AC(v8);
  SpendLimitMenu__IsLimitOver(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpendLimitMenu_CallbackFunc___ctor(
        SpendLimitMenu_CallbackFunc_o *this,
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_199A140;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_199A100;
}


System_IAsyncResult_o *__fastcall SpendLimitMenu_CallbackFunc__BeginInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B4CF44(this, &v5, callback, object);
}


void __fastcall SpendLimitMenu_CallbackFunc__EndInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall SpendLimitMenu_CallbackFunc__Invoke(SpendLimitMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}