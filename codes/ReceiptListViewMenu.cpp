void ReceiptListViewMenu___ctor(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ReceiptListViewMenu__Callback(ReceiptListViewMenu_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ReceiptListViewMenu_CallbackFunc_o *v5; // x20
  struct ReceiptListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void ReceiptListViewMenu__Close(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
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
    sub_1C372B4(listViewManager);
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
      sub_1C372B4(listViewManager);
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
  const MethodInfo *v7; // x3
  struct System_String_o *dragParentObject; // x1
  System_String_o *selectReceiptPath; // x20
  System_String_o *History; // x0
  ReceiptViewMenu_o *receiptViewMenu; // x21
  System_String_o *v12; // x20
  ReceiptViewMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3

  if ( (byte_4C40513 & 1) == 0 )
  {
    sub_1C37058(&AccountingManager_TypeInfo);
    sub_1C37058(&ReceiptViewMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_ReceiptListViewMenu_OnEndCheckReceipt__);
    byte_4C40513 = 1;
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
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectReceiptPath, (int32_t)dragParentObject, v6, v7);
      selectReceiptPath = this->fields.selectReceiptPath;
      if ( !AccountingManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo);
      History = AccountingManager__ReadHistory(selectReceiptPath, 0);
      if ( History )
      {
        this->fields.state = 3;
        receiptViewMenu = this->fields.receiptViewMenu;
        v12 = History;
        v13 = (ReceiptViewMenu_CallbackFunc_o *)sub_1C372A4(ReceiptViewMenu_CallbackFunc_TypeInfo);
        ReceiptViewMenu_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_ReceiptListViewMenu_OnEndCheckReceipt__,
          v14);
        if ( receiptViewMenu )
        {
          ReceiptViewMenu__Open(receiptViewMenu, v12, v13, v15);
          return;
        }
LABEL_13:
        sub_1C372B4(listViewManager);
      }
    }
  }
}


void ReceiptListViewMenu__OnClickSendReceiptErrorFlagTrue(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  DebugTestRootComponent_c *v2; // x0

  if ( (byte_4C40515 & 1) == 0 )
  {
    sub_1C37058(&DebugTestRootComponent_TypeInfo);
    byte_4C40515 = 1;
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

  if ( (byte_4C40514 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ReceiptListViewMenu_OnClickItem__);
    byte_4C40514 = 1;
  }
  if ( this->fields.state == 3 )
  {
    receiptViewMenu = this->fields.receiptViewMenu;
    if ( !receiptViewMenu
      || (ReceiptViewMenu__Close(receiptViewMenu, method),
          this->fields.state = 2,
          listViewManager = this->fields.listViewManager,
          v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
          System_Action___ctor(v5, (Il2CppObject *)this, Method_ReceiptListViewMenu_OnClickItem__, 0),
          !listViewManager)
      || (ReceiptListViewManager__SetMode_37401192(listViewManager, 2, v5, v6),
          (receiptViewMenu = (ReceiptViewMenu_o *)this->fields.scriptTestAssetCancelButton) == 0) )
    {
      sub_1C372B4(receiptViewMenu);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)receiptViewMenu, 1, 0);
  }
}


void ReceiptListViewMenu__OnMoveEnd(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  ReceiptListViewManager_o *listViewManager; // x20
  System_Action_o *v4; // x21
  UnityEngine_Behaviour_o *scriptTestAssetCancelButton; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C40512 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ReceiptListViewMenu_OnClickItem__);
    byte_4C40512 = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ReceiptListViewMenu_OnClickItem__, 0);
    if ( !listViewManager
      || (ReceiptListViewManager__SetMode_37401192(listViewManager, 2, v4, v6),
          (scriptTestAssetCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestAssetCancelButton) == 0) )
    {
      sub_1C372B4(scriptTestAssetCancelButton);
    }
    UnityEngine_Behaviour__set_enabled(scriptTestAssetCancelButton, 1, 0);
  }
}


void ReceiptListViewMenu__Open(
        ReceiptListViewMenu_o *this,
        ReceiptListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *scriptTestAssetRootObject; // x0
  const MethodInfo *v7; // x1
  ReceiptListViewManager_o *listViewManager; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x3

  if ( (byte_4C40511 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ReceiptListViewMenu_OnMoveEnd__);
    byte_4C40511 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
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
      sub_1C372B4(scriptTestAssetRootObject);
    }
    ReceiptListViewManager__CreateList((ReceiptListViewManager_o *)scriptTestAssetRootObject, v7);
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ReceiptListViewMenu_OnMoveEnd__, 0);
  if ( !listViewManager )
    goto LABEL_11;
  ReceiptListViewManager__SetMode_37401192(listViewManager, 1, v9, v10);
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

  if ( (byte_4C4050F & 1) == 0 )
  {
    sub_1C37058(&ReceiptListViewMenu_CallbackFunc_TypeInfo);
    byte_4C4050F = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
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

  if ( (byte_4C40510 & 1) == 0 )
  {
    sub_1C37058(&ReceiptListViewMenu_CallbackFunc_TypeInfo);
    byte_4C40510 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  ReceiptListViewMenu__OnMoveEnd(v11, v12);
}


void ReceiptListViewMenu_CallbackFunc___ctor(
        ReceiptListViewMenu_CallbackFunc_o *this,
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A78918;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A788D0;
}


System_IAsyncResult_o *ReceiptListViewMenu_CallbackFunc__BeginInvoke(
        ReceiptListViewMenu_CallbackFunc_o *this,
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
  if ( (byte_4C40516 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C40516 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void ReceiptListViewMenu_CallbackFunc__EndInvoke(
        ReceiptListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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