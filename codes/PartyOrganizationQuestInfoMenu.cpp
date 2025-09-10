void PartyOrganizationQuestInfoMenu___ctor(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C22DF1 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C22DF1 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationQuestInfoMenu__Close(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C2D6EC(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    0,
    callbackFunc->fields.method);
}


void PartyOrganizationQuestInfoMenu__Close_34119820(
        PartyOrganizationQuestInfoMenu_o *this,
        System_Action_o *onFinishedClose,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C22DEF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationQuestInfoMenu_EndClose__);
    byte_4C22DEF = 1;
  }
  this->fields.onfinishedClose = onFinishedClose;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onfinishedClose, (int32_t)onFinishedClose, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void PartyOrganizationQuestInfoMenu__EndClose(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onfinishedClose, 0);
}


void PartyOrganizationQuestInfoMenu__EndOpen(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  ;
}


void PartyOrganizationQuestInfoMenu__Init(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationQuestInfoMenu__Open(
        PartyOrganizationQuestInfoMenu_o *this,
        int32_t questId,
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  QuestInformationComponent_o *questInfoWindow; // x21
  System_Action_o *v10; // x22
  System_Action_o *v11; // x23

  if ( (byte_4C22DED & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationQuestInfoMenu_Close__);
    sub_1C2D490(&Method_PartyOrganizationQuestInfoMenu_Open__);
    byte_4C22DED = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  questInfoWindow = this->fields.questInfoWindow;
  v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_Open__, 0);
  v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_Close__, 0);
  if ( !questInfoWindow )
    goto LABEL_9;
  if ( QuestInformationComponent__Setup(questInfoWindow, questId, 2, v10, v11, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.questInfoWindow;
    if ( gameObject )
    {
      QuestInformationComponent__Open((QuestInformationComponent_o *)gameObject, 0);
      return;
    }
LABEL_9:
    sub_1C2D6EC(gameObject, v8);
  }
}


void PartyOrganizationQuestInfoMenu__Open_34119640(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C22DEE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationQuestInfoMenu_EndOpen__);
    byte_4C22DEE = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v3, 0, 0);
}


void PartyOrganizationQuestInfoMenu__add_callbackFunc(
        PartyOrganizationQuestInfoMenu_o *this,
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationQuestInfoMenu_o *v11; // x0
  PartyOrganizationQuestInfoMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C22DEB & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo);
    byte_4C22DEB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationQuestInfoMenu_CallbackFunc_c *)v8->klass != PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationQuestInfoMenu_o *)sub_1C2D9AC(v8);
  PartyOrganizationQuestInfoMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *PartyOrganizationQuestInfoMenu__get_closeBtnPath(
        PartyOrganizationQuestInfoMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22DF0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10922/*"QuestInfoWindowPrefab/QuestInfo/BgSp/CloseButton"*/);
    byte_4C22DF0 = 1;
  }
  return (System_String_o *)StringLiteral_10922/*"QuestInfoWindowPrefab/QuestInfo/BgSp/CloseButton"*/;
}


void PartyOrganizationQuestInfoMenu__remove_callbackFunc(
        PartyOrganizationQuestInfoMenu_o *this,
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationQuestInfoMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C22DEC & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo);
    byte_4C22DEC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationQuestInfoMenu_CallbackFunc_c *)v8->klass != PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationQuestInfoMenu_o *)sub_1C2D9AC(v8);
  PartyOrganizationQuestInfoMenu__Init(v11, v12);
}


void PartyOrganizationQuestInfoMenu_CallbackFunc___ctor(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
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
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6C61C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6C5D4;
}


System_IAsyncResult_o *PartyOrganizationQuestInfoMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4C22DF2 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C22DF2 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void PartyOrganizationQuestInfoMenu_CallbackFunc__EndInvoke(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void PartyOrganizationQuestInfoMenu_CallbackFunc__Invoke(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}