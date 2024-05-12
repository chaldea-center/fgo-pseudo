void __fastcall SpendLimitMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Int32_array **v9; // x19
  __int64 v10; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x0
  __int64 v41; // x0

  if ( (byte_438BED6 & 1) == 0 )
  {
    sub_B775C4(&SpendLimitMenu_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_1748/*"AGE_VEIFICATION_TYPE3"*/);
    sub_B775C4(&StringLiteral_1744/*"AGE_VEIFICATION_NONE"*/);
    sub_B775C4(&StringLiteral_1746/*"AGE_VEIFICATION_TYPE1"*/);
    sub_B775C4(&StringLiteral_1747/*"AGE_VEIFICATION_TYPE2"*/);
    byte_438BED6 = 1;
  }
  v1 = sub_B775DC(string___TypeInfo, 4LL);
  if ( !v1 )
    sub_B7769C(0LL, v2);
  v9 = (System_Int32_array **)v1;
  v10 = StringLiteral_1744/*"AGE_VEIFICATION_NONE"*/;
  if ( StringLiteral_1744/*"AGE_VEIFICATION_NONE"*/ )
  {
    v10 = sub_B77684(StringLiteral_1744/*"AGE_VEIFICATION_NONE"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_26;
    v11 = (System_Int32_array **)StringLiteral_1744/*"AGE_VEIFICATION_NONE"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !*((_DWORD *)v9 + 6) )
    goto LABEL_25;
  v9[4] = (System_Int32_array *)v11;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 4), v11, v3, v4, v5, v6, v7, v8);
  v10 = StringLiteral_1746/*"AGE_VEIFICATION_TYPE1"*/;
  if ( StringLiteral_1746/*"AGE_VEIFICATION_TYPE1"*/ )
  {
    v10 = sub_B77684(StringLiteral_1746/*"AGE_VEIFICATION_TYPE1"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_26;
    v18 = (System_Int32_array **)StringLiteral_1746/*"AGE_VEIFICATION_TYPE1"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 1u )
    goto LABEL_25;
  v9[5] = (System_Int32_array *)v18;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 5), v18, v12, v13, v14, v15, v16, v17);
  v10 = StringLiteral_1747/*"AGE_VEIFICATION_TYPE2"*/;
  if ( StringLiteral_1747/*"AGE_VEIFICATION_TYPE2"*/ )
  {
    v10 = sub_B77684(StringLiteral_1747/*"AGE_VEIFICATION_TYPE2"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_26;
    v25 = (System_Int32_array **)StringLiteral_1747/*"AGE_VEIFICATION_TYPE2"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 2u )
    goto LABEL_25;
  v9[6] = (System_Int32_array *)v25;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 6), v25, v19, v20, v21, v22, v23, v24);
  v10 = StringLiteral_1748/*"AGE_VEIFICATION_TYPE3"*/;
  if ( StringLiteral_1748/*"AGE_VEIFICATION_TYPE3"*/ )
  {
    v10 = sub_B77684(StringLiteral_1748/*"AGE_VEIFICATION_TYPE3"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( v10 )
    {
      v32 = (System_Int32_array **)StringLiteral_1748/*"AGE_VEIFICATION_TYPE3"*/;
      goto LABEL_23;
    }
LABEL_26:
    v41 = sub_B776BC(v10);
    sub_B77668(v41, 0LL);
  }
  v32 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v9 + 6) <= 3u )
  {
LABEL_25:
    v40 = sub_B776C8(v10);
    sub_B77668(v40, 0LL);
  }
  v9[7] = (System_Int32_array *)v32;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 7), v32, v26, v27, v28, v29, v30, v31);
  static_fields = (BattleServantConfConponent_o *)SpendLimitMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B77560(static_fields, v9, v34, v35, v36, v37, v38, v39);
}


void __fastcall SpendLimitMenu___ctor(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438BED5 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438BED5 = 1;
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
    sub_B77560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    SpendLimitMenu_CallbackFunc__Invoke(v9, 0LL);
  }
}


void __fastcall SpendLimitMenu__Close(SpendLimitMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SpendLimitMenu__Close_26694572(this, 0LL, v2);
}


void __fastcall SpendLimitMenu__Close_26694572(
        SpendLimitMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438BED2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SpendLimitMenu_EndClose__);
    byte_438BED2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SpendLimitMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_B77560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_438BED0 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438BED0 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_B7769C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall SpendLimitMenu__IsLimitOver(SpendLimitMenu_o *this, int32_t value, const MethodInfo *method)
{
  ManagerConfig_c *v4; // x0
  int32_t Limit; // w0

  if ( (byte_438BECF & 1) == 0 )
  {
    sub_B775C4(&AgeVerificationMenu_TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    byte_438BECF = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
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

  if ( (byte_438BED3 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438BED3 = 1;
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
    SpendLimitMenu__Callback(this, v3);
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
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  int32_t AgeType; // w0
  UILabel_o *titleLabel; // x22
  int32_t v16; // w21
  UILabel_o *messageLabel; // x22
  System_String_o *v18; // x23
  SpendLimitMenu_c *v19; // x8
  struct System_String_array *typeTextList; // x8
  Il2CppObject *v21; // x21
  Il2CppObject *PriceInfo; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v24; // x20
  struct SpendLimitMenu_CallbackFunc_o **p_callbackFunc; // x19
  __int64 v26; // x0

  if ( (byte_438BED1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AgeVerificationMenu_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SpendLimitMenu_EndOpen__);
    sub_B775C4(&SpendLimitMenu_TypeInfo);
    sub_B775C4(&StringLiteral_12525/*"SPEND_LIMIT_CLOSE"*/);
    sub_B775C4(&StringLiteral_12526/*"SPEND_LIMIT_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12527/*"SPEND_LIMIT_TITLE"*/);
    byte_438BED1 = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_B77560(
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
    sub_B77560(
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
    v16 = AgeType;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12527/*"SPEND_LIMIT_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_23;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12526/*"SPEND_LIMIT_MESSAGE"*/, 0LL);
    v18 = (System_String_o *)gameObject;
    v19 = SpendLimitMenu_TypeInfo;
    if ( (BYTE3(SpendLimitMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SpendLimitMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpendLimitMenu_TypeInfo);
      v19 = SpendLimitMenu_TypeInfo;
    }
    typeTextList = v19->static_fields->typeTextList;
    if ( !typeTextList )
      goto LABEL_23;
    if ( v16 >= typeTextList->max_length )
    {
      v26 = sub_B776C8(gameObject);
      sub_B77668(v26, 0LL);
    }
    v21 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[v16], 0LL);
    PriceInfo = (Il2CppObject *)LocalizationManager__GetPriceInfo(value, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_44897472(v18, v21, PriceInfo, 0LL);
    if ( !messageLabel
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12525/*"SPEND_LIMIT_CLOSE"*/, 0LL),
          !closeLabel) )
    {
LABEL_23:
      sub_B7769C(gameObject, v13);
    }
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    v24 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_SpendLimitMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
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

  if ( (byte_438BECD & 1) == 0 )
  {
    sub_B775C4(&SpendLimitMenu_CallbackFunc_TypeInfo);
    byte_438BECD = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SpendLimitMenu_o *)sub_B77990(v8);
  SpendLimitMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall SpendLimitMenu__get_closeBtnPath(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438BED4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_15770/*"Window/CloseButton"*/);
    byte_438BED4 = 1;
  }
  return (System_String_o *)StringLiteral_15770/*"Window/CloseButton"*/;
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

  if ( (byte_438BECE & 1) == 0 )
  {
    sub_B775C4(&SpendLimitMenu_CallbackFunc_TypeInfo);
    byte_438BECE = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SpendLimitMenu_o *)sub_B77990(v8);
  SpendLimitMenu__IsLimitOver(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpendLimitMenu_CallbackFunc___ctor(
        SpendLimitMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall SpendLimitMenu_CallbackFunc__BeginInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B77568(this, &v5, callback, object);
}


void __fastcall SpendLimitMenu_CallbackFunc__EndInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall SpendLimitMenu_CallbackFunc__Invoke(SpendLimitMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  SpendLimitMenu_CallbackFunc_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  SpendLimitMenu_CallbackFunc_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  SpendLimitMenu_CallbackFunc_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (SpendLimitMenu_CallbackFunc_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B775F4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B775EC(v18);
      v21 = sub_B779F0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B0F4C0(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B77674(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B0F4C0(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
    goto LABEL_36;
  }
}