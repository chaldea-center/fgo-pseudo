void ReceiptListViewMenu___ctor(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ReceiptListViewMenu__Callback(ReceiptListViewMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ReceiptListViewMenu_CallbackFunc_o *v9; // x20
  struct ReceiptListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void ReceiptListViewMenu__Close(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0

  ReceiptListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.scriptTestAssetRootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1C7BD40(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void ReceiptListViewMenu__EndInput(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.scriptTestAssetCancelButton) == 0) )
    {
      sub_1C7BD40(listViewManager, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0);
  }
}


void ReceiptListViewMenu__OnClickCancel(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 2 )
  {
    ReceiptListViewMenu__EndInput(this, method);
    this->fields.state = 4;
    ReceiptListViewMenu__Callback(this, 0, v3);
  }
}


void ReceiptListViewMenu__OnClickItem(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ReceiptListViewManager_o *listViewManager; // x0
  int32_t callbackIndex; // w1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_String_o *dragParentObject; // x1
  System_String_o *selectReceiptPath; // x20
  System_String_o *History; // x0
  ReceiptViewMenu_o *receiptViewMenu; // x21
  System_String_o *v16; // x20
  ReceiptViewMenu_CallbackFunc_o *v17; // x22
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  if ( (byte_4CEBB86 & 1) == 0 )
  {
    sub_1C7BAE8(&AccountingManager_TypeInfo);
    sub_1C7BAE8(&ReceiptViewMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_ReceiptListViewMenu_OnEndCheckReceipt__);
    byte_4CEBB86 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_13;
    callbackIndex = listViewManager->fields.callbackIndex;
    if ( (callbackIndex & 0x80000000) == 0 )
    {
      listViewManager = (ReceiptListViewManager_o *)ReceiptListViewManager__GetItem(listViewManager, callbackIndex, v2);
      if ( !listViewManager )
        goto LABEL_13;
      dragParentObject = (struct System_String_o *)listViewManager->fields.dragParentObject;
      this->fields.selectReceiptPath = dragParentObject;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.selectReceiptPath,
        (int32_t)dragParentObject,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      selectReceiptPath = this->fields.selectReceiptPath;
      if ( !AccountingManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      History = AccountingManager__ReadHistory(selectReceiptPath, 0);
      if ( History )
      {
        this->fields.state = 3;
        receiptViewMenu = this->fields.receiptViewMenu;
        v16 = History;
        v17 = (ReceiptViewMenu_CallbackFunc_o *)sub_1C7BD34(ReceiptViewMenu_CallbackFunc_TypeInfo);
        ReceiptViewMenu_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          Method_ReceiptListViewMenu_OnEndCheckReceipt__,
          v18);
        if ( receiptViewMenu )
        {
          ReceiptViewMenu__Open(receiptViewMenu, v16, v17, v19);
          return;
        }
LABEL_13:
        sub_1C7BD40(listViewManager, method);
      }
    }
  }
}


void ReceiptListViewMenu__OnClickSendReceiptErrorFlagTrue(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  DebugTestRootComponent_c *v2; // x0

  if ( (byte_4CEBB88 & 1) == 0 )
  {
    sub_1C7BAE8(&DebugTestRootComponent_TypeInfo);
    byte_4CEBB88 = 1;
  }
  v2 = DebugTestRootComponent_TypeInfo;
  if ( !DebugTestRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugTestRootComponent_TypeInfo);
    v2 = DebugTestRootComponent_TypeInfo;
  }
  v2->static_fields->SendReceiptErrorFlag = 1;
}


void ReceiptListViewMenu__OnEndCheckReceipt(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  ReceiptViewMenu_o *receiptViewMenu; // x0
  ReceiptListViewManager_o *listViewManager; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_4CEBB87 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ReceiptListViewMenu_OnClickItem__);
    byte_4CEBB87 = 1;
  }
  if ( this->fields.state == 3 )
  {
    receiptViewMenu = this->fields.receiptViewMenu;
    if ( !receiptViewMenu
      || (ReceiptViewMenu__Close(receiptViewMenu, method),
          this->fields.state = 2,
          listViewManager = this->fields.listViewManager,
          v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
          System_Action___ctor(v5, (Il2CppObject *)this, Method_ReceiptListViewMenu_OnClickItem__, 0),
          !listViewManager)
      || (ReceiptListViewManager__SetMode_37878476(listViewManager, 2, v5, v6),
          (receiptViewMenu = (ReceiptViewMenu_o *)this->fields.scriptTestAssetCancelButton) == 0) )
    {
      sub_1C7BD40(receiptViewMenu, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)receiptViewMenu, 1, 0);
  }
}


void ReceiptListViewMenu__OnMoveEnd(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  ReceiptListViewManager_o *listViewManager; // x20
  System_Action_o *v4; // x21
  UnityEngine_Behaviour_o *scriptTestAssetCancelButton; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4CEBB85 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ReceiptListViewMenu_OnClickItem__);
    byte_4CEBB85 = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ReceiptListViewMenu_OnClickItem__, 0);
    if ( !listViewManager
      || (ReceiptListViewManager__SetMode_37878476(listViewManager, 2, v4, v7),
          (scriptTestAssetCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestAssetCancelButton) == 0) )
    {
      sub_1C7BD40(scriptTestAssetCancelButton, v6);
    }
    UnityEngine_Behaviour__set_enabled(scriptTestAssetCancelButton, 1, 0);
  }
}


void ReceiptListViewMenu__Open(
        ReceiptListViewMenu_o *this,
        ReceiptListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *scriptTestAssetRootObject; // x0
  ReceiptListViewManager_o *listViewManager; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x3

  if ( (byte_4CEBB84 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ReceiptListViewMenu_OnMoveEnd__);
    byte_4CEBB84 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    scriptTestAssetRootObject = this->fields.scriptTestAssetRootObject;
    if ( !scriptTestAssetRootObject
      || (UnityEngine_GameObject__SetActive(scriptTestAssetRootObject, 1, 0),
          (scriptTestAssetRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0)
      || (ListViewManager__set_IsInput((ListViewManager_o *)scriptTestAssetRootObject, 0, 0),
          (scriptTestAssetRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestAssetCancelButton) == 0)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestAssetRootObject, 0, 0),
          (scriptTestAssetRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
    {
LABEL_11:
      sub_1C7BD40(scriptTestAssetRootObject, v10);
    }
    ReceiptListViewManager__CreateList((ReceiptListViewManager_o *)scriptTestAssetRootObject, v10);
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v13 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ReceiptListViewMenu_OnMoveEnd__, 0);
  if ( !listViewManager )
    goto LABEL_11;
  ReceiptListViewManager__SetMode_37878476(listViewManager, 1, v13, v14);
}


void ReceiptListViewMenu__add_callbackFunc(
        ReceiptListViewMenu_o *this,
        ReceiptListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ReceiptListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ReceiptListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ReceiptListViewMenu_o *v11; // x0
  ReceiptListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CEBB82 & 1) == 0 )
  {
    sub_1C7BAE8(&ReceiptListViewMenu_CallbackFunc_TypeInfo);
    byte_4CEBB82 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ReceiptListViewMenu_CallbackFunc_c *)v8->klass != ReceiptListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  ReceiptListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void ReceiptListViewMenu__remove_callbackFunc(
        ReceiptListViewMenu_o *this,
        ReceiptListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ReceiptListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ReceiptListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ReceiptListViewMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CEBB83 & 1) == 0 )
  {
    sub_1C7BAE8(&ReceiptListViewMenu_CallbackFunc_TypeInfo);
    byte_4CEBB83 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ReceiptListViewMenu_CallbackFunc_c *)v8->klass != ReceiptListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  ReceiptListViewMenu__OnMoveEnd(v11, v12);
}


void ReceiptListViewMenu_CallbackFunc___ctor(
        ReceiptListViewMenu_CallbackFunc_o *this,
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
  sub_1C7BA8C(
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
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAE688;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAE640;
}


System_IAsyncResult_o *ReceiptListViewMenu_CallbackFunc__BeginInvoke(
        ReceiptListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CEBB89 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CEBB89 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void ReceiptListViewMenu_CallbackFunc__EndInvoke(
        ReceiptListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void ReceiptListViewMenu_CallbackFunc__Invoke(
        ReceiptListViewMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}