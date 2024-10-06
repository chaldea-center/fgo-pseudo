void __fastcall PartyOrganizationQuestInfoMenu___ctor(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A6BEB6 & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    byte_4A6BEB6 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationQuestInfoMenu__Close(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1B9026C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
    callbackFunc->fields.original_method_info,
    0LL,
    *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall PartyOrganizationQuestInfoMenu__Close_32277428(
        PartyOrganizationQuestInfoMenu_o *this,
        System_Action_o *onFinishedClose,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A6BEB4 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, onFinishedClose);
    sub_1B90010(&Method_PartyOrganizationQuestInfoMenu_EndClose__, v6);
    byte_4A6BEB4 = 1;
  }
  this->fields.onfinishedClose = onFinishedClose;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.onfinishedClose,
    (int32_t)onFinishedClose,
    (int32_t)method,
    v3);
  v7 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PartyOrganizationQuestInfoMenu__EndClose(
        PartyOrganizationQuestInfoMenu_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onfinishedClose, 0LL);
}


void __fastcall PartyOrganizationQuestInfoMenu__EndOpen(
        PartyOrganizationQuestInfoMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationQuestInfoMenu__Init(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B9026C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationQuestInfoMenu__Open(
        PartyOrganizationQuestInfoMenu_o *this,
        int32_t questId,
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  QuestInformationComponent_o *questInfoWindow; // x21
  System_Action_o *v12; // x22
  System_Action_o *v13; // x23

  if ( (byte_4A6BEB2 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_1B90010(&Method_PartyOrganizationQuestInfoMenu_Close__, v7);
    sub_1B90010(&Method_PartyOrganizationQuestInfoMenu_Open__, v8);
    byte_4A6BEB2 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  questInfoWindow = this->fields.questInfoWindow;
  v12 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_Open__, 0LL);
  v13 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_Close__, 0LL);
  if ( !questInfoWindow )
    goto LABEL_9;
  if ( QuestInformationComponent__Setup(questInfoWindow, questId, 2, v12, v13, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.questInfoWindow;
    if ( gameObject )
    {
      QuestInformationComponent__Open((QuestInformationComponent_o *)gameObject, 0LL);
      return;
    }
LABEL_9:
    sub_1B9026C(gameObject, v10);
  }
}


void __fastcall PartyOrganizationQuestInfoMenu__Open_32277248(
        PartyOrganizationQuestInfoMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4A6BEB3 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_PartyOrganizationQuestInfoMenu_EndOpen__, v3);
    byte_4A6BEB3 = 1;
  }
  v4 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0LL);
}


void __fastcall PartyOrganizationQuestInfoMenu__add_callbackFunc(
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

  if ( (byte_4A6BEB0 & 1) == 0 )
  {
    sub_1B90010(&PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo, value);
    byte_4A6BEB0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationQuestInfoMenu_CallbackFunc_c *)v8->klass != PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationQuestInfoMenu_o *)sub_1B9052C(v8);
  PartyOrganizationQuestInfoMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationQuestInfoMenu__get_closeBtnPath(
        PartyOrganizationQuestInfoMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A6BEB5 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_10929/*"QuestInfoWindowPrefab/QuestInfo/BgSp/CloseButton"*/, method);
    byte_4A6BEB5 = 1;
  }
  return (System_String_o *)StringLiteral_10929/*"QuestInfoWindowPrefab/QuestInfo/BgSp/CloseButton"*/;
}


void __fastcall PartyOrganizationQuestInfoMenu__remove_callbackFunc(
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

  if ( (byte_4A6BEB1 & 1) == 0 )
  {
    sub_1B90010(&PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo, value);
    byte_4A6BEB1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationQuestInfoMenu_CallbackFunc_c *)v8->klass != PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationQuestInfoMenu_o *)sub_1B9052C(v8);
  PartyOrganizationQuestInfoMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationQuestInfoMenu_CallbackFunc___ctor(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D0708;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D06C0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationQuestInfoMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A6BEB7 & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, result);
    byte_4A6BEB7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v9, callback, object);
}


void __fastcall PartyOrganizationQuestInfoMenu_CallbackFunc__EndInvoke(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall PartyOrganizationQuestInfoMenu_CallbackFunc__Invoke(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}