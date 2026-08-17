void ReceiptListViewMenu___ctor(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ReceiptListViewMenu__Callback(ReceiptListViewMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ReceiptListViewMenu_CallbackFunc_o *v9; // x20
  struct ReceiptListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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
    sub_2213CDC(listViewManager, v3);
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
      sub_2213CDC(listViewManager, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_String_o *dragParentObject; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *selectReceiptPath; // x20
  System_String_o *History; // x0
  System_String_o *v17; // x20
  ReceiptViewMenu_o *receiptViewMenu; // x21
  ReceiptViewMenu_CallbackFunc_o *v19; // x22
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3

  if ( (byte_596DC9F & 1) == 0 )
  {
    sub_2213A60(&AccountingManager_TypeInfo);
    sub_2213A60(&ReceiptViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ReceiptListViewMenu_OnEndCheckReceipt__);
    byte_596DC9F = 1;
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.selectReceiptPath,
        (int32_t)dragParentObject,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      selectReceiptPath = this->fields.selectReceiptPath;
      if ( !*(&AccountingManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AccountingManager_TypeInfo, v13, v14);
      History = AccountingManager__ReadHistory(selectReceiptPath, 0);
      if ( History )
      {
        v17 = History;
        receiptViewMenu = this->fields.receiptViewMenu;
        this->fields.state = 3;
        v19 = (ReceiptViewMenu_CallbackFunc_o *)sub_2213CCC(ReceiptViewMenu_CallbackFunc_TypeInfo);
        ReceiptViewMenu_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          Method_ReceiptListViewMenu_OnEndCheckReceipt__,
          v20);
        if ( receiptViewMenu )
        {
          ReceiptViewMenu__Open(receiptViewMenu, v17, v19, v21);
          return;
        }
LABEL_13:
        sub_2213CDC(listViewManager, method);
      }
    }
  }
}


void ReceiptListViewMenu__OnClickSendReceiptErrorFlagTrue(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DebugTestRootComponent_c *v3; // x0

  if ( (byte_596DCA1 & 1) == 0 )
  {
    sub_2213A60(&DebugTestRootComponent_TypeInfo);
    byte_596DCA1 = 1;
  }
  v3 = DebugTestRootComponent_TypeInfo;
  if ( !*(&DebugTestRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugTestRootComponent_TypeInfo, method, v2);
    v3 = DebugTestRootComponent_TypeInfo;
  }
  v3->static_fields->SendReceiptErrorFlag = 1;
}


void ReceiptListViewMenu__OnEndCheckReceipt(ReceiptListViewMenu_o *this, const MethodInfo *method)
{
  ReceiptViewMenu_o *receiptViewMenu; // x0
  ReceiptListViewManager_o *listViewManager; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_596DCA0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ReceiptListViewMenu_OnClickItem__);
    byte_596DCA0 = 1;
  }
  if ( this->fields.state == 3 )
  {
    receiptViewMenu = this->fields.receiptViewMenu;
    if ( !receiptViewMenu
      || (ReceiptViewMenu__Close(receiptViewMenu, method),
          listViewManager = this->fields.listViewManager,
          this->fields.state = 2,
          v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
          System_Action___ctor(v5, (Il2CppObject *)this, Method_ReceiptListViewMenu_OnClickItem__, 0),
          !listViewManager)
      || (ReceiptListViewManager__SetMode_44304608(listViewManager, 2, v5, v6),
          (receiptViewMenu = (ReceiptViewMenu_o *)this->fields.scriptTestAssetCancelButton) == 0) )
    {
      sub_2213CDC(receiptViewMenu, method);
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

  if ( (byte_596DC9E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ReceiptListViewMenu_OnClickItem__);
    byte_596DC9E = 1;
  }
  if ( this->fields.state == 1 )
  {
    listViewManager = this->fields.listViewManager;
    this->fields.state = 2;
    v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ReceiptListViewMenu_OnClickItem__, 0);
    if ( !listViewManager
      || (ReceiptListViewManager__SetMode_44304608(listViewManager, 2, v4, v7),
          (scriptTestAssetCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestAssetCancelButton) == 0) )
    {
      sub_2213CDC(scriptTestAssetCancelButton, v6);
    }
    UnityEngine_Behaviour__set_enabled(scriptTestAssetCancelButton, 1, 0);
  }
}


void ReceiptListViewMenu__Open(
        ReceiptListViewMenu_o *this,
        ReceiptListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *scriptTestAssetRootObject; // x0
  ReceiptListViewManager_o *listViewManager; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x3

  if ( (byte_596DC9D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ReceiptListViewMenu_OnMoveEnd__);
    byte_596DC9D = 1;
  }
  if ( !this->fields.state )
  {
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
      sub_2213CDC(scriptTestAssetRootObject, v10);
    }
    ReceiptListViewManager__CreateList((ReceiptListViewManager_o *)scriptTestAssetRootObject, v10);
  }
  listViewManager = this->fields.listViewManager;
  this->fields.state = 1;
  v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ReceiptListViewMenu_OnMoveEnd__, 0);
  if ( !listViewManager )
    goto LABEL_11;
  ReceiptListViewManager__SetMode_44304608(listViewManager, 1, v13, v14);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ReceiptListViewMenu_o *v13; // x0
  ReceiptListViewMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DC9B & 1) == 0 )
  {
    sub_2213A60(&ReceiptListViewMenu_CallbackFunc_TypeInfo);
    byte_596DC9B = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, ReceiptListViewMenu_CallbackFunc_TypeInfo, v9, v10);
  ReceiptListViewMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ReceiptListViewMenu_o *v13; // x0
  ReceiptListViewMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DC9C & 1) == 0 )
  {
    sub_2213A60(&ReceiptListViewMenu_CallbackFunc_TypeInfo);
    byte_596DC9C = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, ReceiptListViewMenu_CallbackFunc_TypeInfo, v9, v10);
  ReceiptListViewMenu__Open(v13, v14, v15);
}


void ReceiptListViewMenu_CallbackFunc___ctor(
        ReceiptListViewMenu_CallbackFunc_o *this,
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
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2008440;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_20083F8;
}


System_IAsyncResult_o *ReceiptListViewMenu_CallbackFunc__BeginInvoke(
        ReceiptListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ReceiptListViewMenu_CallbackFunc__EndInvoke(
        ReceiptListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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