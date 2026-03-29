void GrandServantResetDialog___ctor(GrandServantResetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B679 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2B679 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void GrandServantResetDialog__Awake(GrandServantResetDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void GrandServantResetDialog__Callback(GrandServantResetDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct GrandServantResetDialog_CallbackFunc_o *v9; // x19
  struct GrandServantResetDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void GrandServantResetDialog__Close(
        GrandServantResetDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BaseDialog__SafeClose((BaseDialog_o *)this, callback, 0);
}


void GrandServantResetDialog__OnClickClose(GrandServantResetDialog_o *this, const MethodInfo *method)
{
  if ( this->fields.baseState == 2 )
    GrandServantResetDialog__Callback(this, method);
}


void GrandServantResetDialog__OnEnable(GrandServantResetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4D2B677 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15739/*"Window/Buttons/CloseButton"*/);
    byte_4D2B677 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_15739/*"Window/Buttons/CloseButton"*/, 0);
}


void GrandServantResetDialog__Open(
        GrandServantResetDialog_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        GrandServantResetDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandGraphDetailMaster_o *Master_object; // x0
  __int64 v13; // x1
  int32_t id; // w21
  GrandGraphDetailMaster_o *v15; // x22
  GrandGraphDetailEntity_o *Entity; // x0
  UILabel_o *messageLabel; // x21
  GrandGraphDetailEntity_o *v18; // x22
  System_String_o *v19; // x23
  const MethodInfo *v20; // x3

  if ( (byte_4D2B678 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_7049/*"GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/);
    byte_4D2B678 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userServantEntity,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !grandGraphEntity )
    goto LABEL_14;
  if ( !userServantEntity )
    goto LABEL_14;
  id = grandGraphEntity->fields.id;
  v15 = Master_object;
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__getSvtClassId(userServantEntity, 0, 0, 0);
  if ( !v15 )
    goto LABEL_14;
  Entity = GrandGraphDetailMaster__GetEntity(v15, id, (int32_t)Master_object, 0);
  messageLabel = this->fields.messageLabel;
  v18 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_7049/*"GRAND_SERVANT_RESET_DIALOG_MESSAGE"*/, 0);
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__GetSvtName(userServantEntity, 0);
  if ( !v18
    || (Master_object = (GrandGraphDetailMaster_o *)System_String__Format_64467032(
                                                      v19,
                                                      (Il2CppObject *)Master_object,
                                                      (Il2CppObject *)v18->fields.nameFull,
                                                      0),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0),
        (Master_object = (GrandGraphDetailMaster_o *)this->fields.servantFaceIcon) == 0) )
  {
LABEL_14:
    sub_1C93D2C(Master_object, v13);
  }
  GrandServantListServantFaceIcon__Setup((GrandServantListServantFaceIcon_o *)Master_object, userServantEntity, 0, v20);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void GrandServantResetDialog__add_callbackFunc(
        GrandServantResetDialog_o *this,
        GrandServantResetDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct GrandServantResetDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct GrandServantResetDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  GrandServantResetDialog_o *v11; // x0
  GrandServantResetDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2B675 & 1) == 0 )
  {
    sub_1C93AD4(&GrandServantResetDialog_CallbackFunc_TypeInfo);
    byte_4D2B675 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (GrandServantResetDialog_CallbackFunc_c *)v8->klass != GrandServantResetDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantResetDialog_o *)sub_1C940C8(v8);
  GrandServantResetDialog__remove_callbackFunc(v11, v12, v13);
}


void GrandServantResetDialog__remove_callbackFunc(
        GrandServantResetDialog_o *this,
        GrandServantResetDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct GrandServantResetDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct GrandServantResetDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  GrandServantResetDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2B676 & 1) == 0 )
  {
    sub_1C93AD4(&GrandServantResetDialog_CallbackFunc_TypeInfo);
    byte_4D2B676 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (GrandServantResetDialog_CallbackFunc_c *)v8->klass != GrandServantResetDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (GrandServantResetDialog_o *)sub_1C940C8(v8);
  GrandServantResetDialog__Awake(v11, v12);
}


void GrandServantResetDialog_CallbackFunc___ctor(
        GrandServantResetDialog_CallbackFunc_o *this,
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
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC0B0C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0ACC;
}


System_IAsyncResult_o *GrandServantResetDialog_CallbackFunc__BeginInvoke(
        GrandServantResetDialog_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void GrandServantResetDialog_CallbackFunc__EndInvoke(
        GrandServantResetDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void GrandServantResetDialog_CallbackFunc__Invoke(
        GrandServantResetDialog_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}