void __fastcall ScriptBranchMenu___ctor(ScriptBranchMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptBranchMenu__Callback(ScriptBranchMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ScriptBranchMenu_CallbackFunc_o *v9; // x20
  struct ScriptBranchMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BE4A70(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
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
    sub_1BE4D28(serverSettingRootObject, method);
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

  if ( (byte_4B64305 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&sorttype);
    sub_1BE4ACC(&Method_ScriptBranchMenu_OnClickItem__, v6);
    byte_4B64305 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (ScriptBranchListViewManager__CreateList(listViewManager, this->fields.listObject, sorttype == 0, v3),
        v8 = this->fields.listViewManager,
        v9 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptBranchMenu_OnClickItem__, 0LL),
        !v8)
    || (ScriptBranchListViewManager__SetMode(v8, 1, v9, v10),
        (listViewManager = (ScriptBranchListViewManager_o *)this->fields.sortType1DispSprite) == 0LL) )
  {
    sub_1BE4D28(listViewManager, *(_QWORD *)&sorttype);
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
      sub_1BE4D28(listViewManager, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  ListViewManager_o *listViewManager; // x0
  const MethodInfo *v18; // x2

  if ( !this->fields.state )
  {
    this->fields.listObject = list;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.listObject,
      (int64_t)list,
      (int64_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0LL),
          (listViewManager = (ListViewManager_o *)this->fields.serverSettingRootObject) == 0LL) )
    {
      sub_1BE4D28(listViewManager, v16);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 1, 0LL);
    ScriptBranchMenu__CreateList(this, this->fields.sortType, v18);
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

  if ( (byte_4B64303 & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptBranchMenu_CallbackFunc_TypeInfo, value);
    byte_4B64303 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
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

  if ( (byte_4B64304 & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptBranchMenu_CallbackFunc_TypeInfo, value);
    byte_4B64304 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  ScriptBranchMenu__CreateList(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchMenu_CallbackFunc___ctor(
        ScriptBranchMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A23D90;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A23D48;
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
  if ( (byte_4B64306 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, result);
    byte_4B64306 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall ScriptBranchMenu_CallbackFunc__EndInvoke(
        ScriptBranchMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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