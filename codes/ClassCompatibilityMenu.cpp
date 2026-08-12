void ClassCompatibilityMenu___ctor(ClassCompatibilityMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ClassCompatibilityMenu__Callback(ClassCompatibilityMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  *p_callbackFunc = 0;
  sub_2213A04(p_callbackFunc, 0);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
}


void ClassCompatibilityMenu__Close(ClassCompatibilityMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_Action_c *v5; // x0
  ClassCompatibilityInfoDialog_o *classCompatibilityConfirmMenu; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_5969ED7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassCompatibilityMenu_EndClose__);
    byte_5969ED7 = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_2213A04(&this->fields.closeCallbackFunc, callback);
    v5 = System_Action_TypeInfo;
    classCompatibilityConfirmMenu = this->fields.classCompatibilityConfirmMenu;
    this->fields.state = 3;
    v7 = (System_Action_o *)sub_2213CCC(v5);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassCompatibilityMenu_EndClose__, 0);
    if ( !classCompatibilityConfirmMenu )
      sub_2213CDC(v8, v9);
    ClassCompatibilityInfoDialog__Close_37340200(classCompatibilityConfirmMenu, v7, v10);
  }
}


void ClassCompatibilityMenu__EndClose(ClassCompatibilityMenu_o *this, const MethodInfo *method)
{
  ClassCompatibilityInfoDialog_o *classCompatibilityConfirmMenu; // x0
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v5; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( this->fields.state == 3 )
  {
    classCompatibilityConfirmMenu = this->fields.classCompatibilityConfirmMenu;
    if ( !classCompatibilityConfirmMenu
      || (ClassCompatibilityInfoDialog__Init(classCompatibilityConfirmMenu, method),
          (classCompatibilityConfirmMenu = (ClassCompatibilityInfoDialog_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0)) == 0) )
    {
      sub_2213CDC(classCompatibilityConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)classCompatibilityConfirmMenu, 0, 0);
    closeCallbackFunc = this->fields.closeCallbackFunc;
    p_closeCallbackFunc = &this->fields.closeCallbackFunc;
    v5 = closeCallbackFunc;
    *((_DWORD *)p_closeCallbackFunc - 4) = 0;
    if ( closeCallbackFunc )
    {
      *p_closeCallbackFunc = 0;
      sub_2213A04(p_closeCallbackFunc, 0);
      ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
    }
  }
}


void ClassCompatibilityMenu__Open(ClassCompatibilityMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  ClassCompatibilityInfoDialog_o *classCompatibilityConfirmMenu; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_5969ED6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassCompatibilityMenu_Callback__);
    byte_5969ED6 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
          classCompatibilityConfirmMenu = this->fields.classCompatibilityConfirmMenu,
          this->fields.state = 1,
          v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
          System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassCompatibilityMenu_Callback__, 0),
          !classCompatibilityConfirmMenu) )
    {
      sub_2213CDC(gameObject, v6);
    }
    ClassCompatibilityInfoDialog__Open(classCompatibilityConfirmMenu, v8, v9);
  }
}


void ClassCompatibilityMenu__add_callbackFunc(
        ClassCompatibilityMenu_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ClassCompatibilityMenu_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5969ED2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5969ED2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ClassCompatibilityMenu_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ClassCompatibilityMenu__remove_callbackFunc(v13, v14, v15);
}


void ClassCompatibilityMenu__add_closeCallbackFunc(
        ClassCompatibilityMenu_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *closeCallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ClassCompatibilityMenu_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5969ED4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5969ED4 = 1;
  }
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = (System_Delegate_o *)closeCallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_closeCallbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ClassCompatibilityMenu_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ClassCompatibilityMenu__remove_closeCallbackFunc(v13, v14, v15);
}


void ClassCompatibilityMenu__remove_callbackFunc(
        ClassCompatibilityMenu_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ClassCompatibilityMenu_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5969ED3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5969ED3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ClassCompatibilityMenu_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ClassCompatibilityMenu__add_closeCallbackFunc(v13, v14, v15);
}


void ClassCompatibilityMenu__remove_closeCallbackFunc(
        ClassCompatibilityMenu_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *closeCallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ClassCompatibilityMenu_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5969ED5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5969ED5 = 1;
  }
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = (System_Delegate_o *)closeCallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_closeCallbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ClassCompatibilityMenu_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ClassCompatibilityMenu__Open(v13, v14, v15);
}