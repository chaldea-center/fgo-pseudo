void ScriptBranchMenu___ctor(ScriptBranchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptBranchMenu__Callback(ScriptBranchMenu_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ScriptBranchMenu_CallbackFunc_o *v5; // x20
  struct ScriptBranchMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C3E508(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void ScriptBranchMenu__Close(ScriptBranchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *serverSettingRootObject; // x0

  serverSettingRootObject = this->fields.serverSettingRootObject;
  this->fields.state = 0;
  if ( !serverSettingRootObject
    || (UnityEngine_GameObject__SetActive(serverSettingRootObject, 0, 0),
        (serverSettingRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
  {
    sub_1C3E7C0(serverSettingRootObject, method);
  }
  ListViewManager__DestroyList((ListViewManager_o *)serverSettingRootObject, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptBranchMenu__CreateList(ScriptBranchMenu_o *this, int32_t sorttype, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ScriptBranchListViewManager_o *listViewManager; // x0
  ScriptBranchListViewManager_o *v7; // x21
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x3

  if ( (byte_4C54308 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ScriptBranchMenu_OnClickItem__);
    byte_4C54308 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (ScriptBranchListViewManager__CreateList(listViewManager, this->fields.listObject, sorttype == 0, v3),
        v7 = this->fields.listViewManager,
        v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_ScriptBranchMenu_OnClickItem__, 0),
        !v7)
    || (ScriptBranchListViewManager__SetMode(v7, 1, v8, v9),
        (listViewManager = (ScriptBranchListViewManager_o *)this->fields.sortType1DispSprite) == 0) )
  {
    sub_1C3E7C0(listViewManager, *(_QWORD *)&sorttype);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, sorttype == 0, 0);
  this->fields.sortType = sorttype;
}


void ScriptBranchMenu__OnClickCancel(ScriptBranchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 1 )
    ScriptBranchMenu__Callback(this, 0, v2);
}


void ScriptBranchMenu__OnClickDecide(ScriptBranchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 1 )
    ScriptBranchMenu__Callback(this, 1, v2);
}


void ScriptBranchMenu__OnClickItem(ScriptBranchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ScriptBranchListViewManager_o *listViewManager; // x0
  int32_t callbackIndex; // w1
  ScriptBranchListViewItem_o *v5; // x19
  bool v6; // w1
  const MethodInfo *v7; // x2

  if ( this->fields.state == 1 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_7;
    callbackIndex = listViewManager->fields.callbackIndex;
    if ( (callbackIndex & 0x80000000) == 0 )
    {
      listViewManager = (ScriptBranchListViewManager_o *)ScriptBranchListViewManager__GetItem(
                                                           listViewManager,
                                                           callbackIndex,
                                                           v2);
      if ( listViewManager )
      {
        v5 = (ScriptBranchListViewItem_o *)listViewManager;
        v6 = !ScriptBranchListViewItem__get_IsFlagOn((ScriptBranchListViewItem_o *)listViewManager, method);
        ScriptBranchListViewItem__ChangeFlag(v5, v6, v7);
        return;
      }
LABEL_7:
      sub_1C3E7C0(listViewManager, method);
    }
  }
}


void ScriptBranchMenu__OnSortType1(ScriptBranchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state )
    ScriptBranchMenu__CreateList(this, this->fields.sortType == 0, v2);
}


void ScriptBranchMenu__Open(
        ScriptBranchMenu_o *this,
        System_Collections_Generic_List_List_string___o *list,
        ScriptBranchMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  ListViewManager_o *listViewManager; // x0
  const MethodInfo *v10; // x2

  if ( !this->fields.state )
  {
    this->fields.listObject = list;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.listObject, (int32_t)list, (int32_t)callback, method);
    this->fields.callbackFunc = callback;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v6, v7);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.serverSettingRootObject) == 0) )
    {
      sub_1C3E7C0(listViewManager, v8);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 1, 0);
    ScriptBranchMenu__CreateList(this, this->fields.sortType, v10);
    this->fields.state = 1;
  }
}


void ScriptBranchMenu__add_callbackFunc(
        ScriptBranchMenu_o *this,
        ScriptBranchMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptBranchMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptBranchMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptBranchMenu_o *v11; // x0
  ScriptBranchMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C54306 & 1) == 0 )
  {
    sub_1C3E564(&ScriptBranchMenu_CallbackFunc_TypeInfo);
    byte_4C54306 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptBranchMenu_CallbackFunc_c *)v8->klass != ScriptBranchMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
  ScriptBranchMenu__remove_callbackFunc(v11, v12, v13);
}


void ScriptBranchMenu__remove_callbackFunc(
        ScriptBranchMenu_o *this,
        ScriptBranchMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptBranchMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptBranchMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptBranchMenu_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_4C54307 & 1) == 0 )
  {
    sub_1C3E564(&ScriptBranchMenu_CallbackFunc_TypeInfo);
    byte_4C54307 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptBranchMenu_CallbackFunc_c *)v8->klass != ScriptBranchMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
  ScriptBranchMenu__CreateList(v11, v12, v13);
}


void ScriptBranchMenu_CallbackFunc___ctor(
        ScriptBranchMenu_CallbackFunc_o *this,
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7FDDC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7FD94;
}


System_IAsyncResult_o *ScriptBranchMenu_CallbackFunc__BeginInvoke(
        ScriptBranchMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = result;
  if ( (byte_4C54309 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    byte_4C54309 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void ScriptBranchMenu_CallbackFunc__EndInvoke(
        ScriptBranchMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void ScriptBranchMenu_CallbackFunc__Invoke(
        ScriptBranchMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}