void __fastcall ScriptBranchMenu___ctor(ScriptBranchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptBranchMenu__Callback(ScriptBranchMenu_o *this, bool result, const MethodInfo *method)
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
    p_callbackFunc->klass = 0LL;
    sub_1BDB81C(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ScriptBranchMenu__Close(ScriptBranchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *serverSettingRootObject; // x0

  serverSettingRootObject = this->fields.serverSettingRootObject;
  this->fields.state = 0;
  if ( !serverSettingRootObject
    || (UnityEngine_GameObject__SetActive(serverSettingRootObject, 0, 0LL),
        (serverSettingRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
  {
    sub_1BDBAD4(serverSettingRootObject, method);
  }
  ListViewManager__DestroyList((ListViewManager_o *)serverSettingRootObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchMenu__CreateList(ScriptBranchMenu_o *this, int32_t sorttype, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  ScriptBranchListViewManager_o *listViewManager; // x0
  ScriptBranchListViewManager_o *v8; // x21
  System_Action_o *v9; // x22
  const MethodInfo *v10; // x3

  if ( (byte_4B420CA & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&sorttype);
    sub_1BDB878(&Method_ScriptBranchMenu_OnClickItem__, v6);
    byte_4B420CA = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (ScriptBranchListViewManager__CreateList(listViewManager, this->fields.listObject, sorttype == 0, v3),
        v8 = this->fields.listViewManager,
        v9 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptBranchMenu_OnClickItem__, 0LL),
        !v8)
    || (ScriptBranchListViewManager__SetMode(v8, 1, v9, v10),
        (listViewManager = (ScriptBranchListViewManager_o *)this->fields.sortType1DispSprite) == 0LL) )
  {
    sub_1BDBAD4(listViewManager, *(_QWORD *)&sorttype);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, sorttype == 0, 0LL);
  this->fields.sortType = sorttype;
}


void __fastcall ScriptBranchMenu__OnClickCancel(ScriptBranchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 1 )
    ScriptBranchMenu__Callback(this, 0, v2);
}


void __fastcall ScriptBranchMenu__OnClickDecide(ScriptBranchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 1 )
    ScriptBranchMenu__Callback(this, 1, v2);
}


void __fastcall ScriptBranchMenu__OnClickItem(ScriptBranchMenu_o *this, const MethodInfo *method)
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
      sub_1BDBAD4(listViewManager, method);
    }
  }
}


void __fastcall ScriptBranchMenu__OnSortType1(ScriptBranchMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state )
    ScriptBranchMenu__CreateList(this, this->fields.sortType == 0, v2);
}


void __fastcall ScriptBranchMenu__Open(
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
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.listObject, (int32_t)list, (int32_t)callback, method);
    this->fields.callbackFunc = callback;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v6, v7);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0LL),
          (listViewManager = (ListViewManager_o *)this->fields.serverSettingRootObject) == 0LL) )
    {
      sub_1BDBAD4(listViewManager, v8);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 1, 0LL);
    ScriptBranchMenu__CreateList(this, this->fields.sortType, v10);
    this->fields.state = 1;
  }
}


void __fastcall ScriptBranchMenu__add_callbackFunc(
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

  if ( (byte_4B420C8 & 1) == 0 )
  {
    sub_1BDB878(&ScriptBranchMenu_CallbackFunc_TypeInfo, value);
    byte_4B420C8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptBranchMenu_CallbackFunc_c *)v8->klass != ScriptBranchMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BDBD94(v8);
  ScriptBranchMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptBranchMenu__remove_callbackFunc(
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

  if ( (byte_4B420C9 & 1) == 0 )
  {
    sub_1BDB878(&ScriptBranchMenu_CallbackFunc_TypeInfo, value);
    byte_4B420C9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptBranchMenu_CallbackFunc_c *)v8->klass != ScriptBranchMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BDBD94(v8);
  ScriptBranchMenu__CreateList(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchMenu_CallbackFunc___ctor(
        ScriptBranchMenu_CallbackFunc_o *this,
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A22304;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A222BC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptBranchMenu_CallbackFunc__BeginInvoke(
        ScriptBranchMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B420CB & 1) == 0 )
  {
    sub_1BDB878(&bool_TypeInfo, result);
    byte_4B420CB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall ScriptBranchMenu_CallbackFunc__EndInvoke(
        ScriptBranchMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall ScriptBranchMenu_CallbackFunc__Invoke(
        ScriptBranchMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}