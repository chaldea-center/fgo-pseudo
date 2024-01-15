void __fastcall SpendLimitMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x19
  __int64 v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40F9D95 & 1) == 0 )
  {
    sub_B16FFC(&SpendLimitMenu_TypeInfo, v1);
    sub_B16FFC(&string___TypeInfo, v3);
    sub_B16FFC(&StringLiteral_1676/*"AGE_VEIFICATION_TYPE3"*/, v4);
    sub_B16FFC(&StringLiteral_1672/*"AGE_VEIFICATION_NONE"*/, v5);
    sub_B16FFC(&StringLiteral_1674/*"AGE_VEIFICATION_TYPE1"*/, v6);
    sub_B16FFC(&StringLiteral_1675/*"AGE_VEIFICATION_TYPE2"*/, v7);
    byte_40F9D95 = 1;
  }
  v8 = sub_B17014(string___TypeInfo, 4LL, v2);
  if ( !v8 )
    sub_B170D4();
  v15 = (System_Int32_array **)v8;
  v16 = StringLiteral_1672/*"AGE_VEIFICATION_NONE"*/;
  if ( StringLiteral_1672/*"AGE_VEIFICATION_NONE"*/ )
  {
    v16 = sub_B170BC(StringLiteral_1672/*"AGE_VEIFICATION_NONE"*/, *(_QWORD *)&(*v15)->m_Items[9]);
    if ( !v16 )
      goto LABEL_26;
    v17 = (System_Int32_array **)StringLiteral_1672/*"AGE_VEIFICATION_NONE"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !*((_DWORD *)v15 + 6) )
    goto LABEL_25;
  v15[4] = (System_Int32_array *)v17;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 4), v17, v9, v10, v11, v12, v13, v14);
  v16 = StringLiteral_1674/*"AGE_VEIFICATION_TYPE1"*/;
  if ( StringLiteral_1674/*"AGE_VEIFICATION_TYPE1"*/ )
  {
    v16 = sub_B170BC(StringLiteral_1674/*"AGE_VEIFICATION_TYPE1"*/, *(_QWORD *)&(*v15)->m_Items[9]);
    if ( !v16 )
      goto LABEL_26;
    v17 = (System_Int32_array **)StringLiteral_1674/*"AGE_VEIFICATION_TYPE1"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( *((_DWORD *)v15 + 6) <= 1u )
    goto LABEL_25;
  v15[5] = (System_Int32_array *)v17;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 5), v17, v9, v18, v19, v20, v21, v22);
  v16 = StringLiteral_1675/*"AGE_VEIFICATION_TYPE2"*/;
  if ( StringLiteral_1675/*"AGE_VEIFICATION_TYPE2"*/ )
  {
    v16 = sub_B170BC(StringLiteral_1675/*"AGE_VEIFICATION_TYPE2"*/, *(_QWORD *)&(*v15)->m_Items[9]);
    if ( !v16 )
      goto LABEL_26;
    v17 = (System_Int32_array **)StringLiteral_1675/*"AGE_VEIFICATION_TYPE2"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( *((_DWORD *)v15 + 6) <= 2u )
    goto LABEL_25;
  v15[6] = (System_Int32_array *)v17;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 6), v17, v9, v23, v24, v25, v26, v27);
  v16 = StringLiteral_1676/*"AGE_VEIFICATION_TYPE3"*/;
  if ( StringLiteral_1676/*"AGE_VEIFICATION_TYPE3"*/ )
  {
    v16 = sub_B170BC(StringLiteral_1676/*"AGE_VEIFICATION_TYPE3"*/, *(_QWORD *)&(*v15)->m_Items[9]);
    if ( v16 )
    {
      v17 = (System_Int32_array **)StringLiteral_1676/*"AGE_VEIFICATION_TYPE3"*/;
      goto LABEL_23;
    }
LABEL_26:
    sub_B170F4(v16);
    sub_B170A0();
  }
  v17 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v15 + 6) <= 3u )
  {
LABEL_25:
    sub_B17100(v16, v17, v9);
    sub_B170A0();
  }
  v15[7] = (System_Int32_array *)v17;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 7), v17, v9, v28, v29, v30, v31, v32);
  static_fields = (BattleServantConfConponent_o *)SpendLimitMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v15;
  sub_B16F98(static_fields, v15, v34, v35, v36, v37, v38, v39);
}


void __fastcall SpendLimitMenu___ctor(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40F9D94 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F9D94 = 1;
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
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    SpendLimitMenu_CallbackFunc__Invoke(v9, 0LL);
  }
}


void __fastcall SpendLimitMenu__Close(SpendLimitMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SpendLimitMenu__Close_24911220(this, 0LL, v2);
}


void __fastcall SpendLimitMenu__Close_24911220(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F9D91 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_SpendLimitMenu_EndClose__, v10);
    byte_40F9D91 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SpendLimitMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UILabel_o *messageLabel; // x0
  UILabel_o *closeLabel; // x0

  if ( (byte_40F9D8F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F9D8F = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (closeLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpendLimitMenu__IsLimitOver(SpendLimitMenu_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  int32_t Limit; // w0

  if ( (byte_40F9D8E & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, *(_QWORD *)&value);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    byte_40F9D8E = 1;
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

  if ( (byte_40F9D92 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9D92 = 1;
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
  int32_t AgeType; // w0
  UILabel_o *titleLabel; // x22
  int32_t v22; // w21
  System_String_o *v23; // x0
  UILabel_o *messageLabel; // x22
  System_String_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  System_String_o *v28; // x23
  SpendLimitMenu_c *v29; // x8
  struct System_String_array *typeTextList; // x8
  Il2CppObject *v31; // x21
  Il2CppObject *PriceInfo; // x0
  System_String_o *v33; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_o *v40; // x20
  struct SpendLimitMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_40F9D90 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&value);
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&Method_SpendLimitMenu_EndOpen__, v13);
    sub_B16FFC(&SpendLimitMenu_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_12240/*"SPEND_LIMIT_CLOSE"*/, v15);
    sub_B16FFC(&StringLiteral_12241/*"SPEND_LIMIT_MESSAGE"*/, v16);
    sub_B16FFC(&StringLiteral_12242/*"SPEND_LIMIT_TITLE"*/, v17);
    byte_40F9D90 = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_B16F98(
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
    sub_B16F98(
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
    v22 = AgeType;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12242/*"SPEND_LIMIT_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_23;
    UILabel__set_text(titleLabel, v23, 0LL);
    messageLabel = this->fields.messageLabel;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12241/*"SPEND_LIMIT_MESSAGE"*/, 0LL);
    v28 = v25;
    v29 = SpendLimitMenu_TypeInfo;
    if ( (BYTE3(SpendLimitMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SpendLimitMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SpendLimitMenu_TypeInfo);
      v29 = SpendLimitMenu_TypeInfo;
    }
    typeTextList = v29->static_fields->typeTextList;
    if ( !typeTextList )
      goto LABEL_23;
    if ( v22 >= typeTextList->max_length )
    {
      sub_B17100(v25, v26, v27);
      sub_B170A0();
    }
    v31 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[v22], 0LL);
    PriceInfo = (Il2CppObject *)LocalizationManager__GetPriceInfo(value, 0LL);
    v33 = System_String__Format_43739268(v28, v31, PriceInfo, 0LL);
    if ( !messageLabel
      || (UILabel__set_text(messageLabel, v33, 0LL),
          closeLabel = this->fields.closeLabel,
          v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12240/*"SPEND_LIMIT_CLOSE"*/, 0LL),
          !closeLabel) )
    {
LABEL_23:
      sub_B170D4();
    }
    UILabel__set_text(closeLabel, v35, 0LL);
    this->fields.state = 1;
    v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_SpendLimitMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
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

  if ( (byte_40F9D8C & 1) == 0 )
  {
    sub_B16FFC(&SpendLimitMenu_CallbackFunc_TypeInfo, value);
    byte_40F9D8C = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SpendLimitMenu_o *)sub_B173C8(v8);
  SpendLimitMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall SpendLimitMenu__get_closeBtnPath(SpendLimitMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40F9D93 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15416/*"Window/CloseButton"*/, method);
    byte_40F9D93 = 1;
  }
  return (System_String_o *)StringLiteral_15416/*"Window/CloseButton"*/;
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

  if ( (byte_40F9D8D & 1) == 0 )
  {
    sub_B16FFC(&SpendLimitMenu_CallbackFunc_TypeInfo, value);
    byte_40F9D8D = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SpendLimitMenu_o *)sub_B173C8(v8);
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall SpendLimitMenu_CallbackFunc__EndInvoke(
        SpendLimitMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  SpendLimitMenu_CallbackFunc_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  SpendLimitMenu_CallbackFunc_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
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
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}