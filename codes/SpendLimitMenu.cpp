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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x19
  __int64 v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x0
  __int64 v47; // x0

  if ( (byte_4187764 & 1) == 0 )
  {
    sub_B2C35C(&SpendLimitMenu_TypeInfo, v1);
    sub_B2C35C(&string___TypeInfo, v2);
    sub_B2C35C(&StringLiteral_1674/*"AGE_VEIFICATION_TYPE3"*/, v3);
    sub_B2C35C(&StringLiteral_1670/*"AGE_VEIFICATION_NONE"*/, v4);
    sub_B2C35C(&StringLiteral_1672/*"AGE_VEIFICATION_TYPE1"*/, v5);
    sub_B2C35C(&StringLiteral_1673/*"AGE_VEIFICATION_TYPE2"*/, v6);
    byte_4187764 = 1;
  }
  v7 = sub_B2C374(string___TypeInfo, 4LL);
  if ( !v7 )
    sub_B2C434(0LL, v8);
  v15 = (System_Int32_array **)v7;
  v16 = StringLiteral_1670/*"AGE_VEIFICATION_NONE"*/;
  if ( StringLiteral_1670/*"AGE_VEIFICATION_NONE"*/ )
  {
    v16 = sub_B2C41C(StringLiteral_1670/*"AGE_VEIFICATION_NONE"*/, *(_QWORD *)&(*v15)->m_Items[9]);
    if ( !v16 )
      goto LABEL_26;
    v17 = (System_Int32_array **)StringLiteral_1670/*"AGE_VEIFICATION_NONE"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !*((_DWORD *)v15 + 6) )
    goto LABEL_25;
  v15[4] = (System_Int32_array *)v17;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 4), v17, v9, v10, v11, v12, v13, v14);
  v16 = StringLiteral_1672/*"AGE_VEIFICATION_TYPE1"*/;
  if ( StringLiteral_1672/*"AGE_VEIFICATION_TYPE1"*/ )
  {
    v16 = sub_B2C41C(StringLiteral_1672/*"AGE_VEIFICATION_TYPE1"*/, *(_QWORD *)&(*v15)->m_Items[9]);
    if ( !v16 )
      goto LABEL_26;
    v24 = (System_Int32_array **)StringLiteral_1672/*"AGE_VEIFICATION_TYPE1"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( *((_DWORD *)v15 + 6) <= 1u )
    goto LABEL_25;
  v15[5] = (System_Int32_array *)v24;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 5), v24, v18, v19, v20, v21, v22, v23);
  v16 = StringLiteral_1673/*"AGE_VEIFICATION_TYPE2"*/;
  if ( StringLiteral_1673/*"AGE_VEIFICATION_TYPE2"*/ )
  {
    v16 = sub_B2C41C(StringLiteral_1673/*"AGE_VEIFICATION_TYPE2"*/, *(_QWORD *)&(*v15)->m_Items[9]);
    if ( !v16 )
      goto LABEL_26;
    v31 = (System_Int32_array **)StringLiteral_1673/*"AGE_VEIFICATION_TYPE2"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( *((_DWORD *)v15 + 6) <= 2u )
    goto LABEL_25;
  v15[6] = (System_Int32_array *)v31;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 6), v31, v25, v26, v27, v28, v29, v30);
  v16 = StringLiteral_1674/*"AGE_VEIFICATION_TYPE3"*/;
  if ( StringLiteral_1674/*"AGE_VEIFICATION_TYPE3"*/ )
  {
    v16 = sub_B2C41C(StringLiteral_1674/*"AGE_VEIFICATION_TYPE3"*/, *(_QWORD *)&(*v15)->m_Items[9]);
    if ( v16 )
    {
      v38 = (System_Int32_array **)StringLiteral_1674/*"AGE_VEIFICATION_TYPE3"*/;
      goto LABEL_23;
    }
LABEL_26:
    v47 = sub_B2C454(v16);
    sub_B2C400(v47, 0LL);
  }
  v38 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v15 + 6) <= 3u )
  {
LABEL_25:
    v46 = sub_B2C460(v16);
    sub_B2C400(v46, 0LL);
  }
  v15[7] = (System_Int32_array *)v38;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 7), v38, v32, v33, v34, v35, v36, v37);
  static_fields = (BattleServantConfConponent_o *)SpendLimitMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v15;
  sub_B2C2F8(static_fields, v15, v40, v41, v42, v43, v44, v45);
}


void __fastcall SpendLimitMenu___ctor(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4187763 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187763 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SpendLimitMenu__Callback(SpendLimitMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  SpendLimitMenu_CallbackFunc_o *v9; // x19
  struct SpendLimitMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    SpendLimitMenu_CallbackFunc__Invoke(v9, 0LL);
  }
}


void __fastcall SpendLimitMenu__Close(SpendLimitMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SpendLimitMenu__Close_24874108(this, 0LL, v2);
}


void __fastcall SpendLimitMenu__Close_24874108(
        SpendLimitMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4187760 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_SpendLimitMenu_EndClose__, v10);
    byte_4187760 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SpendLimitMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall SpendLimitMenu__EndClose(SpendLimitMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SpendLimitMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall SpendLimitMenu__EndOpen(SpendLimitMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SpendLimitMenu__Init(SpendLimitMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_418775E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418775E = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_B2C434(titleLabel, method);
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
  int32_t Limit; // w0

  if ( (byte_418775D & 1) == 0 )
  {
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    byte_418775D = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 1;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  Limit = AgeVerificationMenu__GetLimit(0LL);
  return Limit >= 0 && Limit < value;
}


void __fastcall SpendLimitMenu__OnClickClose(SpendLimitMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4187761 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187761 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, method);
    SpendLimitMenu__Callback(this, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpendLimitMenu__Open(
        SpendLimitMenu_o *this,
        int32_t value,
        SpendLimitMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  int32_t AgeType; // w0
  UILabel_o *titleLabel; // x22
  int32_t v23; // w21
  UILabel_o *messageLabel; // x22
  System_String_o *v25; // x23
  SpendLimitMenu_c *v26; // x8
  struct System_String_array *typeTextList; // x8
  Il2CppObject *v28; // x21
  Il2CppObject *PriceInfo; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v31; // x20
  struct SpendLimitMenu_CallbackFunc_o **p_callbackFunc; // x19
  __int64 v33; // x0

  if ( (byte_418775F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&value);
    sub_B2C35C(&AgeVerificationMenu_TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_SpendLimitMenu_EndOpen__, v13);
    sub_B2C35C(&SpendLimitMenu_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_12293/*"SPEND_LIMIT_CLOSE"*/, v15);
    sub_B2C35C(&StringLiteral_12294/*"SPEND_LIMIT_MESSAGE"*/, v16);
    sub_B2C35C(&StringLiteral_12295/*"SPEND_LIMIT_TITLE"*/, v17);
    byte_418775F = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)p_callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    *((_DWORD *)p_callbackFunc - 2) = 0;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    }
    AgeType = AgeVerificationMenu__GetAgeType(0LL);
    titleLabel = this->fields.titleLabel;
    v23 = AgeType;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12295/*"SPEND_LIMIT_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_23;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12294/*"SPEND_LIMIT_MESSAGE"*/, 0LL);
    v25 = (System_String_o *)gameObject;
    v26 = SpendLimitMenu_TypeInfo;
    if ( (BYTE3(SpendLimitMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SpendLimitMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpendLimitMenu_TypeInfo);
      v26 = SpendLimitMenu_TypeInfo;
    }
    typeTextList = v26->static_fields->typeTextList;
    if ( !typeTextList )
      goto LABEL_23;
    if ( v23 >= typeTextList->max_length )
    {
      v33 = sub_B2C460(gameObject);
      sub_B2C400(v33, 0LL);
    }
    v28 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[v23], 0LL);
    PriceInfo = (Il2CppObject *)LocalizationManager__GetPriceInfo(value, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(v25, v28, PriceInfo, 0LL);
    if ( !messageLabel
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12293/*"SPEND_LIMIT_CLOSE"*/, 0LL),
          !closeLabel) )
    {
LABEL_23:
      sub_B2C434(gameObject, v20);
    }
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_SpendLimitMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0LL);
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

  if ( (byte_418775B & 1) == 0 )
  {
    sub_B2C35C(&SpendLimitMenu_CallbackFunc_TypeInfo, value);
    byte_418775B = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SpendLimitMenu_o *)sub_B2C728(v8);
  SpendLimitMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall SpendLimitMenu__get_closeBtnPath(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4187762 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15479/*"Window/CloseButton"*/, method);
    byte_4187762 = 1;
  }
  return (System_String_o *)StringLiteral_15479/*"Window/CloseButton"*/;
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

  if ( (byte_418775C & 1) == 0 )
  {
    sub_B2C35C(&SpendLimitMenu_CallbackFunc_TypeInfo, value);
    byte_418775C = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SpendLimitMenu_o *)sub_B2C728(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall SpendLimitMenu_CallbackFunc__BeginInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall SpendLimitMenu_CallbackFunc__EndInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall SpendLimitMenu_CallbackFunc__Invoke(SpendLimitMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  SpendLimitMenu_CallbackFunc_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  SpendLimitMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  SpendLimitMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (SpendLimitMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}