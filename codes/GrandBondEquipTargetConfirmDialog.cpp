void GrandBondEquipTargetConfirmDialog___ctor(GrandBondEquipTargetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_593AE05 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593AE05 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void GrandBondEquipTargetConfirmDialog__Awake(GrandBondEquipTargetConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void GrandBondEquipTargetConfirmDialog__Callback(
        GrandBondEquipTargetConfirmDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o *v9; // x20
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void GrandBondEquipTargetConfirmDialog__Close(
        GrandBondEquipTargetConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BaseDialog__SafeClose((BaseDialog_o *)this, callback, 0);
}


void GrandBondEquipTargetConfirmDialog__OnClickBond(
        GrandBondEquipTargetConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandBondEquipTargetConfirmDialog__Callback(this, 1, v2);
}


void GrandBondEquipTargetConfirmDialog__OnClickCancel(
        GrandBondEquipTargetConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandBondEquipTargetConfirmDialog__Callback(this, 2, v2);
}


void GrandBondEquipTargetConfirmDialog__OnClickNormal(
        GrandBondEquipTargetConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.baseState == 2 )
    GrandBondEquipTargetConfirmDialog__Callback(this, 0, v2);
}


void GrandBondEquipTargetConfirmDialog__OnEnable(GrandBondEquipTargetConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_593AE03 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16224/*"Window/Buttons/CancelButton"*/);
    byte_593AE03 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16224/*"Window/Buttons/CancelButton"*/, 0);
}


void GrandBondEquipTargetConfirmDialog__Open(
        GrandBondEquipTargetConfirmDialog_o *this,
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *callback,
        System_String_o *servantName,
        System_String_o *className,
        int32_t rarity,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  __int64 v13; // x1
  __int64 v14; // x1
  UILabel_o *messageLabel; // x23
  System_String_o *v16; // x24
  Il2CppObject *RarityType; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  System_String_o *resultText; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_593AE04 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&StringLiteral_7273/*"GRAND_BOND_EQUIP_TARGET_CONFIRM_DIALOG_MESSAGE_SERVANT_NAME"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593AE04 = 1;
  }
  resultText = 0;
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    servantName,
    className,
    rarity,
    (int32_t)method,
    v6,
    v7);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  if ( LocalizationManager__TryGet(
         &resultText,
         (System_String_o *)StringLiteral_7273/*"GRAND_BOND_EQUIP_TARGET_CONFIRM_DIALOG_MESSAGE_SERVANT_NAME"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0) )
  {
    messageLabel = this->fields.messageLabel;
    v16 = resultText;
    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v14);
    RarityType = (Il2CppObject *)Rarity__getRarityType(rarity, 0);
    v18 = System_String__Format_75484644(v16, RarityType, (Il2CppObject *)servantName, (Il2CppObject *)className, 0);
    if ( !messageLabel )
      sub_21FFECC(v18, v19);
    UILabel__set_text(messageLabel, v18, 0);
  }
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void GrandBondEquipTargetConfirmDialog__add_callbackFunc(
        GrandBondEquipTargetConfirmDialog_o *this,
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  GrandBondEquipTargetConfirmDialog_o *v12; // x0
  GrandBondEquipTargetConfirmDialog_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_593AE01 & 1) == 0 )
  {
    sub_21FFC50(&GrandBondEquipTargetConfirmDialog_CallbackFunc_TypeInfo);
    byte_593AE01 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (GrandBondEquipTargetConfirmDialog_CallbackFunc_c *)v8->klass != GrandBondEquipTargetConfirmDialog_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_223767C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, GrandBondEquipTargetConfirmDialog_CallbackFunc_TypeInfo, v9);
  GrandBondEquipTargetConfirmDialog__remove_callbackFunc(v12, v13, v14);
}


void GrandBondEquipTargetConfirmDialog__remove_callbackFunc(
        GrandBondEquipTargetConfirmDialog_o *this,
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  GrandBondEquipTargetConfirmDialog_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_593AE02 & 1) == 0 )
  {
    sub_21FFC50(&GrandBondEquipTargetConfirmDialog_CallbackFunc_TypeInfo);
    byte_593AE02 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (GrandBondEquipTargetConfirmDialog_CallbackFunc_c *)v8->klass != GrandBondEquipTargetConfirmDialog_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_223767C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, GrandBondEquipTargetConfirmDialog_CallbackFunc_TypeInfo, v9);
  GrandBondEquipTargetConfirmDialog__Awake(v12, v13);
}


void GrandBondEquipTargetConfirmDialog_CallbackFunc___ctor(
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFDF5C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFDF14;
}


System_IAsyncResult_o *GrandBondEquipTargetConfirmDialog_CallbackFunc__BeginInvoke(
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_593AE06 & 1) == 0 )
  {
    sub_21FFC50(&GrandBondEquipTargetConfirmDialog_Result_TypeInfo);
    byte_593AE06 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(GrandBondEquipTargetConfirmDialog_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void GrandBondEquipTargetConfirmDialog_CallbackFunc__EndInvoke(
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void GrandBondEquipTargetConfirmDialog_CallbackFunc__Invoke(
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}