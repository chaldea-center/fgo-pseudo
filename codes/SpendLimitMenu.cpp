void __fastcall SpendLimitMenu___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x19
  __int64 v28; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x0
  __int64 v59; // x0

  if ( (byte_42E9223 & 1) == 0 )
  {
    sub_B5D5C4(&SpendLimitMenu_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&string___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_1699/*"AGE_VEIFICATION_TYPE3"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_1695/*"AGE_VEIFICATION_NONE"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1697/*"AGE_VEIFICATION_TYPE1"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_1698/*"AGE_VEIFICATION_TYPE2"*/, v16, v17, v18);
    byte_42E9223 = 1;
  }
  v19 = sub_B5D5DC(string___TypeInfo, 4LL);
  if ( !v19 )
    sub_B5D69C(0LL, v20);
  v27 = (System_Int32_array **)v19;
  v28 = StringLiteral_1695/*"AGE_VEIFICATION_NONE"*/;
  if ( StringLiteral_1695/*"AGE_VEIFICATION_NONE"*/ )
  {
    v28 = sub_B5D684(StringLiteral_1695/*"AGE_VEIFICATION_NONE"*/, *(_QWORD *)&(*v27)->m_Items[9]);
    if ( !v28 )
      goto LABEL_26;
    v29 = (System_Int32_array **)StringLiteral_1695/*"AGE_VEIFICATION_NONE"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( !*((_DWORD *)v27 + 6) )
    goto LABEL_25;
  v27[4] = (System_Int32_array *)v29;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 4), v29, v21, v22, v23, v24, v25, v26);
  v28 = StringLiteral_1697/*"AGE_VEIFICATION_TYPE1"*/;
  if ( StringLiteral_1697/*"AGE_VEIFICATION_TYPE1"*/ )
  {
    v28 = sub_B5D684(StringLiteral_1697/*"AGE_VEIFICATION_TYPE1"*/, *(_QWORD *)&(*v27)->m_Items[9]);
    if ( !v28 )
      goto LABEL_26;
    v36 = (System_Int32_array **)StringLiteral_1697/*"AGE_VEIFICATION_TYPE1"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( *((_DWORD *)v27 + 6) <= 1u )
    goto LABEL_25;
  v27[5] = (System_Int32_array *)v36;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 5), v36, v30, v31, v32, v33, v34, v35);
  v28 = StringLiteral_1698/*"AGE_VEIFICATION_TYPE2"*/;
  if ( StringLiteral_1698/*"AGE_VEIFICATION_TYPE2"*/ )
  {
    v28 = sub_B5D684(StringLiteral_1698/*"AGE_VEIFICATION_TYPE2"*/, *(_QWORD *)&(*v27)->m_Items[9]);
    if ( !v28 )
      goto LABEL_26;
    v43 = (System_Int32_array **)StringLiteral_1698/*"AGE_VEIFICATION_TYPE2"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( *((_DWORD *)v27 + 6) <= 2u )
    goto LABEL_25;
  v27[6] = (System_Int32_array *)v43;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 6), v43, v37, v38, v39, v40, v41, v42);
  v28 = StringLiteral_1699/*"AGE_VEIFICATION_TYPE3"*/;
  if ( StringLiteral_1699/*"AGE_VEIFICATION_TYPE3"*/ )
  {
    v28 = sub_B5D684(StringLiteral_1699/*"AGE_VEIFICATION_TYPE3"*/, *(_QWORD *)&(*v27)->m_Items[9]);
    if ( v28 )
    {
      v50 = (System_Int32_array **)StringLiteral_1699/*"AGE_VEIFICATION_TYPE3"*/;
      goto LABEL_23;
    }
LABEL_26:
    v59 = sub_B5D6BC(v28);
    sub_B5D668(v59, 0LL);
  }
  v50 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v27 + 6) <= 3u )
  {
LABEL_25:
    v58 = sub_B5D6C8(v28);
    sub_B5D668(v58, 0LL);
  }
  v27[7] = (System_Int32_array *)v50;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 7), v50, v44, v45, v46, v47, v48, v49);
  static_fields = (BattleServantConfConponent_o *)SpendLimitMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v27;
  sub_B5D560(static_fields, v27, v52, v53, v54, v55, v56, v57);
}


void __fastcall SpendLimitMenu___ctor(SpendLimitMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9222 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9222 = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    SpendLimitMenu_CallbackFunc__Invoke(v9, 0LL);
  }
}


void __fastcall SpendLimitMenu__Close(SpendLimitMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SpendLimitMenu__Close_26166704(this, 0LL, v2);
}


void __fastcall SpendLimitMenu__Close_26166704(
        SpendLimitMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E921F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SpendLimitMenu_EndClose__, v10, v11, v12);
    byte_42E921F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SpendLimitMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall SpendLimitMenu__EndOpen(SpendLimitMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SpendLimitMenu__Init(SpendLimitMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42E921D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E921D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_B5D69C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall SpendLimitMenu__IsLimitOver(SpendLimitMenu_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ManagerConfig_c *v8; // x0
  int32_t Limit; // w0

  if ( (byte_42E921C & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, value, (_DWORD)method, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    byte_42E921C = 1;
  }
  v8 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
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
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42E9220 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9220 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SpendLimitMenu__Callback(this, v5);
  }
}


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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  int32_t AgeType; // w0
  UILabel_o *titleLabel; // x22
  int32_t v37; // w21
  UILabel_o *messageLabel; // x22
  System_String_o *v39; // x23
  SpendLimitMenu_c *v40; // x8
  struct System_String_array *typeTextList; // x8
  Il2CppObject *v42; // x21
  Il2CppObject *PriceInfo; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v45; // x20
  struct SpendLimitMenu_CallbackFunc_o **p_callbackFunc; // x19
  __int64 v47; // x0

  if ( (byte_42E921E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, value, (_DWORD)callback, method);
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SpendLimitMenu_EndOpen__, v17, v18, v19);
    sub_B5D5C4(&SpendLimitMenu_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_12440/*"SPEND_LIMIT_CLOSE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_12441/*"SPEND_LIMIT_MESSAGE"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_12442/*"SPEND_LIMIT_TITLE"*/, v29, v30, v31);
    byte_42E921E = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_B5D560(
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
    sub_B5D560(
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
    v37 = AgeType;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SPEND_LIMIT_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_23;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12441/*"SPEND_LIMIT_MESSAGE"*/, 0LL);
    v39 = (System_String_o *)gameObject;
    v40 = SpendLimitMenu_TypeInfo;
    if ( (BYTE3(SpendLimitMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SpendLimitMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpendLimitMenu_TypeInfo);
      v40 = SpendLimitMenu_TypeInfo;
    }
    typeTextList = v40->static_fields->typeTextList;
    if ( !typeTextList )
      goto LABEL_23;
    if ( v37 >= typeTextList->max_length )
    {
      v47 = sub_B5D6C8(gameObject);
      sub_B5D668(v47, 0LL);
    }
    v42 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[v37], 0LL);
    PriceInfo = (Il2CppObject *)LocalizationManager__GetPriceInfo(value, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(v39, v42, PriceInfo, 0LL);
    if ( !messageLabel
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SPEND_LIMIT_CLOSE"*/, 0LL),
          !closeLabel) )
    {
LABEL_23:
      sub_B5D69C(gameObject, v34);
    }
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_SpendLimitMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0LL);
  }
}


void __fastcall SpendLimitMenu__add_callbackFunc(
        SpendLimitMenu_o *this,
        SpendLimitMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SpendLimitMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct SpendLimitMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SpendLimitMenu_o *v12; // x0
  SpendLimitMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E921A & 1) == 0 )
  {
    sub_B5D5C4(&SpendLimitMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E921A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SpendLimitMenu_CallbackFunc_c *)v9->klass != SpendLimitMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (SpendLimitMenu_o *)sub_B5D990(v9);
  SpendLimitMenu__remove_callbackFunc(v12, v13, v14);
}


System_String_o *__fastcall SpendLimitMenu__get_closeBtnPath(SpendLimitMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9221 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15669/*"Window/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42E9221 = 1;
  }
  return (System_String_o *)StringLiteral_15669/*"Window/CloseButton"*/;
}


void __fastcall SpendLimitMenu__remove_callbackFunc(
        SpendLimitMenu_o *this,
        SpendLimitMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SpendLimitMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct SpendLimitMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SpendLimitMenu_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2

  if ( (byte_42E921B & 1) == 0 )
  {
    sub_B5D5C4(&SpendLimitMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E921B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SpendLimitMenu_CallbackFunc_c *)v9->klass != SpendLimitMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (SpendLimitMenu_o *)sub_B5D990(v9);
  SpendLimitMenu__IsLimitOver(v12, v13, v14);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall SpendLimitMenu_CallbackFunc__BeginInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall SpendLimitMenu_CallbackFunc__EndInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall SpendLimitMenu_CallbackFunc__Invoke(SpendLimitMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  SpendLimitMenu_CallbackFunc_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  SpendLimitMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  SpendLimitMenu_CallbackFunc_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (SpendLimitMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}