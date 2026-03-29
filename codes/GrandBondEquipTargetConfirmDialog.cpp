void GrandBondEquipTargetConfirmDialog___ctor(GrandBondEquipTargetConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D33288 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D33288 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o *v9; // x20
  struct GrandBondEquipTargetConfirmDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4D33286 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15738/*"Window/Buttons/CancelButton"*/);
    byte_4D33286 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_15738/*"Window/Buttons/CancelButton"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandBondEquipTargetConfirmDialog__Open(
        GrandBondEquipTargetConfirmDialog_o *this,
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *callback,
        System_String_o *servantName,
        System_String_o *className,
        int32_t rarity,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  UILabel_o *messageLabel; // x23
  System_String_o *v14; // x24
  Il2CppObject *RarityType; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o *resultText; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D33287 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Rarity_TypeInfo);
    sub_1C93AD4(&StringLiteral_7026/*"GRAND_BOND_EQUIP_TARGET_CONFIRM_DIALOG_MESSAGE_SERVANT_NAME"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D33287 = 1;
  }
  resultText = 0;
  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)servantName,
    (int32_t)className,
    *(System_String_o **)&rarity,
    (int32_t)method,
    v6,
    v7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( LocalizationManager__TryGet(
         &resultText,
         (System_String_o *)StringLiteral_7026/*"GRAND_BOND_EQUIP_TARGET_CONFIRM_DIALOG_MESSAGE_SERVANT_NAME"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0) )
  {
    messageLabel = this->fields.messageLabel;
    v14 = resultText;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    RarityType = (Il2CppObject *)Rarity__getRarityType(rarity, 0);
    v16 = System_String__Format_64467100(v14, RarityType, (Il2CppObject *)servantName, (Il2CppObject *)className, 0);
    if ( !messageLabel )
      sub_1C93D2C(v16, v17);
    UILabel__set_text(messageLabel, v16, 0);
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
  __int64 v9; // x0
  bool v10; // zf
  GrandBondEquipTargetConfirmDialog_o *v11; // x0
  GrandBondEquipTargetConfirmDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D33284 & 1) == 0 )
  {
    sub_1C93AD4(&GrandBondEquipTargetConfirmDialog_CallbackFunc_TypeInfo);
    byte_4D33284 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  GrandBondEquipTargetConfirmDialog__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  GrandBondEquipTargetConfirmDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D33285 & 1) == 0 )
  {
    sub_1C93AD4(&GrandBondEquipTargetConfirmDialog_CallbackFunc_TypeInfo);
    byte_4D33285 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  GrandBondEquipTargetConfirmDialog__Awake(v11, v12);
}


void GrandBondEquipTargetConfirmDialog_CallbackFunc___ctor(
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *this,
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ACB338;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACB2F0;
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
  if ( (byte_4D33289 & 1) == 0 )
  {
    sub_1C93AD4(&GrandBondEquipTargetConfirmDialog_Result_TypeInfo);
    byte_4D33289 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(GrandBondEquipTargetConfirmDialog_Result_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void GrandBondEquipTargetConfirmDialog_CallbackFunc__EndInvoke(
        GrandBondEquipTargetConfirmDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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