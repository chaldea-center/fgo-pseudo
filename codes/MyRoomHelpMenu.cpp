void MyRoomHelpMenu___ctor(MyRoomHelpMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CC9795 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC9795 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MyRoomHelpMenu__Close(MyRoomHelpMenu_o *this, MyRoomHelpMenu_CallbackFunc_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CC9794 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_MyRoomHelpMenu_endClose__);
    byte_4CC9794 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MyRoomHelpMenu_endClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void MyRoomHelpMenu__Init(MyRoomHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void MyRoomHelpMenu__OnEnable(MyRoomHelpMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CC9791 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_9228/*"MyRoomHelpListPanel/BaseWindow/UpperCloseButton"*/);
    byte_4CC9791 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  v5 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_9228/*"MyRoomHelpListPanel/BaseWindow/UpperCloseButton"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v5 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
      AndroidBackKeyManager__AddBackBtn(gameObject, 0);
      return;
    }
LABEL_9:
    sub_1C71608(transform, v4);
  }
}


void MyRoomHelpMenu__Open(MyRoomHelpMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void MyRoomHelpMenu__add_callbackFunc(
        MyRoomHelpMenu_o *this,
        MyRoomHelpMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MyRoomHelpMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MyRoomHelpMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MyRoomHelpMenu_o *v11; // x0
  MyRoomHelpMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC9792 & 1) == 0 )
  {
    sub_1C713B0(&MyRoomHelpMenu_CallbackFunc_TypeInfo);
    byte_4CC9792 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (MyRoomHelpMenu_CallbackFunc_c *)v8->klass != MyRoomHelpMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  MyRoomHelpMenu__remove_callbackFunc(v11, v12, v13);
}


void MyRoomHelpMenu__endClose(MyRoomHelpMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct MyRoomHelpMenu_CallbackFunc_o *v10; // x20
  struct MyRoomHelpMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_1C71354(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void MyRoomHelpMenu__remove_callbackFunc(
        MyRoomHelpMenu_o *this,
        MyRoomHelpMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MyRoomHelpMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MyRoomHelpMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MyRoomHelpMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC9793 & 1) == 0 )
  {
    sub_1C713B0(&MyRoomHelpMenu_CallbackFunc_TypeInfo);
    byte_4CC9793 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (MyRoomHelpMenu_CallbackFunc_c *)v8->klass != MyRoomHelpMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  MyRoomHelpMenu__Init(v11, v12);
}


void MyRoomHelpMenu_CallbackFunc___ctor(
        MyRoomHelpMenu_CallbackFunc_o *this,
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA9370;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA9330;
}


System_IAsyncResult_o *MyRoomHelpMenu_CallbackFunc__BeginInvoke(
        MyRoomHelpMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
}


void MyRoomHelpMenu_CallbackFunc__EndInvoke(
        MyRoomHelpMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void MyRoomHelpMenu_CallbackFunc__Invoke(MyRoomHelpMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}