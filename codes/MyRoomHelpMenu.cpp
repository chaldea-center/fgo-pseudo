void MyRoomHelpMenu___ctor(MyRoomHelpMenu_o *this, const MethodInfo *method)
{
  if ( (byte_5972C5B & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5972C5B = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MyRoomHelpMenu__Close(MyRoomHelpMenu_o *this, MyRoomHelpMenu_CallbackFunc_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_5972C5A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MyRoomHelpMenu_endClose__);
    byte_5972C5A = 1;
  }
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_5972C57 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9612/*"MyRoomHelpListPanel/BaseWindow/UpperCloseButton"*/);
    byte_5972C57 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_9612/*"MyRoomHelpListPanel/BaseWindow/UpperCloseButton"*/, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v6 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
      AndroidBackKeyManager__AddBackBtn(gameObject, 0);
      return;
    }
LABEL_9:
    sub_2213CDC(transform, v4);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  MyRoomHelpMenu_o *v12; // x0
  MyRoomHelpMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_5972C58 & 1) == 0 )
  {
    sub_2213A60(&MyRoomHelpMenu_CallbackFunc_TypeInfo);
    byte_5972C58 = 1;
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
    v10 = sub_224B48C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, MyRoomHelpMenu_CallbackFunc_TypeInfo, v9);
  MyRoomHelpMenu__remove_callbackFunc(v12, v13, v14);
}


void MyRoomHelpMenu__endClose(MyRoomHelpMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct MyRoomHelpMenu_CallbackFunc_o *v10; // x20
  struct MyRoomHelpMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  MyRoomHelpMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_5972C59 & 1) == 0 )
  {
    sub_2213A60(&MyRoomHelpMenu_CallbackFunc_TypeInfo);
    byte_5972C59 = 1;
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
    v10 = sub_224B48C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, MyRoomHelpMenu_CallbackFunc_TypeInfo, v9);
  MyRoomHelpMenu__Init(v12, v13);
}


void MyRoomHelpMenu_CallbackFunc___ctor(
        MyRoomHelpMenu_CallbackFunc_o *this,
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2010518;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20104D8;
}


System_IAsyncResult_o *MyRoomHelpMenu_CallbackFunc__BeginInvoke(
        MyRoomHelpMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_2213A14(this, &v5, callback, object);
}


void MyRoomHelpMenu_CallbackFunc__EndInvoke(
        MyRoomHelpMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void MyRoomHelpMenu_CallbackFunc__Invoke(MyRoomHelpMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}