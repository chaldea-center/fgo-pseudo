void BackViewListViewMenu___ctor(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void BackViewListViewMenu__Callback(BackViewListViewMenu_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct BackViewListViewMenu_CallbackFunc_o *v5; // x20
  struct BackViewListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C32BC4(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void BackViewListViewMenu__Close(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  BackViewListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.backAssetList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.backAssetList, 0, v4, v5);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1C32E7C(listViewManager);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void BackViewListViewMenu__EndInput(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.cancelButton) == 0) )
    {
      sub_1C32E7C(listViewManager);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0);
  }
}


void BackViewListViewMenu__OnClickCancel(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 2 )
  {
    BackViewListViewMenu__EndInput(this, method);
    this->fields.state = 4;
    BackViewListViewMenu__Callback(this, 0, v3);
  }
}


void BackViewListViewMenu__OnClickClear(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C34E41 & 1) == 0 )
  {
    sub_1C32C20(&ScriptManager_TypeInfo);
    byte_4C34E41 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__BackViewClear(0);
  }
}


void BackViewListViewMenu__OnClickForceObi169(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *forceObi169Sprite; // x0
  bool enabled; // w0
  ScriptManager_c *v5; // x8
  bool v6; // w19

  if ( (byte_4C34E42 & 1) == 0 )
  {
    sub_1C32C20(&ScriptManager_TypeInfo);
    byte_4C34E42 = 1;
  }
  forceObi169Sprite = this->fields.forceObi169Sprite;
  if ( !forceObi169Sprite
    || (forceObi169Sprite = (struct UISprite_o *)UnityEngine_Behaviour__get_enabled(
                                                   (UnityEngine_Behaviour_o *)forceObi169Sprite,
                                                   0),
        !this->fields.forceObi169Sprite)
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)this->fields.forceObi169Sprite,
          ((unsigned __int8)forceObi169Sprite & 1) == 0,
          0),
        (forceObi169Sprite = this->fields.forceObi169Sprite) == 0) )
  {
    sub_1C32E7C(forceObi169Sprite);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceObi169Sprite, 0);
  v5 = ScriptManager_TypeInfo;
  v6 = enabled;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v5 = ScriptManager_TypeInfo;
  }
  v5->static_fields->defaultForceObi_16_9 = v6;
}


void BackViewListViewMenu__OnClickItem(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BackViewListViewManager_o *listViewManager; // x0
  int32_t callbackIndex; // w1
  System_String_o *dragParentObject; // x20
  System_String_array *backAssetList; // x21
  ScriptManager_CallbackFunc_o *v8; // x22

  if ( (byte_4C34E3F & 1) == 0 )
  {
    sub_1C32C20(&Method_BackViewListViewMenu_OnEndBackView__);
    sub_1C32C20(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&ScriptManager_TypeInfo);
    byte_4C34E3F = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_11;
    callbackIndex = listViewManager->fields.callbackIndex;
    if ( callbackIndex < 0 )
      return;
    listViewManager = (BackViewListViewManager_o *)BackViewListViewManager__GetItem(listViewManager, callbackIndex, v2);
    this->fields.state = 3;
    if ( !listViewManager )
LABEL_11:
      sub_1C32E7C(listViewManager);
    dragParentObject = (System_String_o *)listViewManager->fields.dragParentObject;
    backAssetList = this->fields.backAssetList;
    v8 = (ScriptManager_CallbackFunc_o *)sub_1C32E6C(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(v8, (Il2CppObject *)this, Method_BackViewListViewMenu_OnEndBackView__, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__BackViewPlay(dragParentObject, backAssetList, v8, 0);
  }
}


void BackViewListViewMenu__OnEndBackView(BackViewListViewMenu_o *this, bool isExit, const MethodInfo *method)
{
  BackViewListViewManager_o *listViewManager; // x20
  System_Action_o *v5; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4C34E40 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BackViewListViewMenu_OnClickItem__);
    byte_4C34E40 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_BackViewListViewMenu_OnClickItem__, 0);
    if ( !listViewManager
      || (BackViewListViewManager__SetMode_37229196(listViewManager, 1, v5, v7),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
    {
      sub_1C32E7C(cancelButton);
    }
    UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
  }
}


void BackViewListViewMenu__OnSearchLabelChange(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  BackViewListViewMenu_CallbackFunc_o *callbackFunc; // x1
  const MethodInfo *v7; // x2

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C32E7C(0);
  ListViewManager__DestroyList(listViewManager, 0);
  this->fields.backAssetList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.backAssetList, 0, v4, v5);
  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  BackViewListViewMenu__Open(this, callbackFunc, v7);
}


void BackViewListViewMenu__Open(
        BackViewListViewMenu_o *this,
        BackViewListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x22
  System_Collections_Generic_List_object__o *v9; // x20
  void *rootObject; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _QWORD *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Predicate_object__o *v16; // x22
  System_Comparison_T__o *v17; // x21
  Il2CppObject *v18; // x22
  struct BackViewListViewMenu___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_String_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2

  if ( (byte_4C34E3D & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&System_Comparison_string__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Sort___78021968);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor___78021832);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&System_Predicate_string__TypeInfo);
    sub_1C32C20(&Method_BackViewListViewMenu___c__Open_b__14_1__);
    sub_1C32C20(&Method_BackViewListViewMenu___c__DisplayClass14_0__Open_b__0__);
    sub_1C32C20(&BackViewListViewMenu___c__DisplayClass14_0_TypeInfo);
    sub_1C32C20(&BackViewListViewMenu___c_TypeInfo);
    sub_1C32C20(&StringLiteral_3028/*"Back"*/);
    byte_4C34E3D = 1;
  }
  if ( !this->fields.state )
  {
    v5 = sub_1C32E6C(BackViewListViewMenu___c__DisplayClass14_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    this->fields.callbackFunc = callback;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v6, v7);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_3028/*"Back"*/,
                                                                        0);
    v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_58294448(
      v9,
      AssetStorageList,
      (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_string___ctor___78021832);
    rootObject = this->fields.rootObject;
    if ( rootObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootObject, 1, 0);
      rootObject = this->fields.listViewManager;
      if ( rootObject )
      {
        ListViewManager__set_IsInput((ListViewManager_o *)rootObject, 0, 0);
        rootObject = this->fields.cancelButton;
        if ( rootObject )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootObject, 0, 0);
          rootObject = this->fields.searchInput;
          if ( rootObject )
          {
            rootObject = UILineInput__GetText((UILineInput_o *)rootObject, 0);
            if ( v5 )
            {
              *(_QWORD *)(v5 + 16) = rootObject;
              v13 = (_QWORD *)(v5 + 16);
              sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)rootObject, v11, v12);
              if ( System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 16), 0) )
              {
                *v13 = 0;
                sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), 0, v14, v15);
              }
              if ( *v13 )
              {
                v16 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_string__TypeInfo);
                System_Predicate_object____ctor(
                  v16,
                  (Il2CppObject *)v5,
                  Method_BackViewListViewMenu___c__DisplayClass14_0__Open_b__0__,
                  0);
                if ( !v9 )
                  goto LABEL_26;
                System_Collections_Generic_List_object___RemoveAll(
                  v9,
                  (System_Predicate_T__o *)v16,
                  (const MethodInfo_3799E18 *)Method_System_Collections_Generic_List_string__RemoveAll__);
              }
              rootObject = BackViewListViewMenu___c_TypeInfo;
              if ( !BackViewListViewMenu___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BackViewListViewMenu___c_TypeInfo);
                rootObject = BackViewListViewMenu___c_TypeInfo;
              }
              v17 = *(System_Comparison_T__o **)(*((_QWORD *)rootObject + 23) + 8LL);
              if ( !v17 )
              {
                if ( !*((_DWORD *)rootObject + 56) )
                {
                  j_il2cpp_runtime_class_init_0(rootObject);
                  rootObject = BackViewListViewMenu___c_TypeInfo;
                }
                v18 = (Il2CppObject *)**((_QWORD **)rootObject + 23);
                v17 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_string__TypeInfo);
                System_Comparison_object____ctor(v17, v18, Method_BackViewListViewMenu___c__Open_b__14_1__, 0);
                static_fields = BackViewListViewMenu___c_TypeInfo->static_fields;
                static_fields->__9__14_1 = (struct System_Comparison_string__o *)v17;
                sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__14_1, (int32_t)v17, v20, v21);
              }
              if ( v9 )
              {
                System_Collections_Generic_List_object___Sort_58303104(
                  v9,
                  v17,
                  (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_string__Sort___78021968);
                v22 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                                      v9,
                                                      (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
                this->fields.backAssetList = v22;
                sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.backAssetList, (int32_t)v22, v23, v24);
                rootObject = this->fields.listViewManager;
                if ( rootObject )
                {
                  BackViewListViewManager__CreateList(
                    (BackViewListViewManager_o *)rootObject,
                    this->fields.backAssetList,
                    v25);
                  goto LABEL_25;
                }
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1C32E7C(rootObject);
  }
LABEL_25:
  BackViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void BackViewListViewMenu__StartInput(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  BackViewListViewManager_o *listViewManager; // x20
  System_Action_o *v4; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  const MethodInfo *v6; // x3
  UnityEngine_Behaviour_o *forceObi169Sprite; // x19

  if ( (byte_4C34E3E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BackViewListViewMenu_OnClickItem__);
    sub_1C32C20(&ScriptManager_TypeInfo);
    byte_4C34E3E = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BackViewListViewMenu_OnClickItem__, 0);
  if ( !listViewManager )
    goto LABEL_10;
  BackViewListViewManager__SetMode_37229196(listViewManager, 1, v4, v6);
  cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_10;
  UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
  cancelButton = (UnityEngine_Behaviour_o *)this->fields.forceObi169Button;
  if ( !cancelButton )
    goto LABEL_10;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))cancelButton->klass[1]._1.name)(
    cancelButton,
    1,
    cancelButton->klass[1]._1.namespaze);
  cancelButton = (UnityEngine_Behaviour_o *)ScriptManager_TypeInfo;
  forceObi169Sprite = (UnityEngine_Behaviour_o *)this->fields.forceObi169Sprite;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !forceObi169Sprite )
LABEL_10:
    sub_1C32E7C(cancelButton);
  UnityEngine_Behaviour__set_enabled(forceObi169Sprite, ScriptManager_TypeInfo->static_fields->defaultForceObi_16_9, 0);
}


void BackViewListViewMenu__StartMenu(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  BackViewListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4C34E3C & 1) == 0 )
  {
    sub_1C32C20(&Method_BackViewListViewMenu__StartMenu_b__13_0__);
    sub_1C32C20(&BackViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4C34E3C = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (BackViewListViewMenu_CallbackFunc_o *)sub_1C32E6C(BackViewListViewMenu_CallbackFunc_TypeInfo);
  BackViewListViewMenu_CallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_BackViewListViewMenu__StartMenu_b__13_0__,
    v4);
  BackViewListViewMenu__Open(this, v3, v5);
}


void BackViewListViewMenu__add_callbackFunc(
        BackViewListViewMenu_o *this,
        BackViewListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BackViewListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BackViewListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BackViewListViewMenu_o *v11; // x0
  BackViewListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C34E3A & 1) == 0 )
  {
    sub_1C32C20(&BackViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4C34E3A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (BackViewListViewMenu_CallbackFunc_c *)v8->klass != BackViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  BackViewListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void BackViewListViewMenu__remove_callbackFunc(
        BackViewListViewMenu_o *this,
        BackViewListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BackViewListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BackViewListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BackViewListViewMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C34E3B & 1) == 0 )
  {
    sub_1C32C20(&BackViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4C34E3B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (BackViewListViewMenu_CallbackFunc_c *)v8->klass != BackViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  BackViewListViewMenu__StartMenu(v11, v12);
}


void BackViewListViewMenu_CallbackFunc___ctor(
        BackViewListViewMenu_CallbackFunc_o *this,
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A743F4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A743AC;
}


System_IAsyncResult_o *BackViewListViewMenu_CallbackFunc__BeginInvoke(
        BackViewListViewMenu_CallbackFunc_o *this,
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
  if ( (byte_4C34E43 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C34E43 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void BackViewListViewMenu_CallbackFunc__EndInvoke(
        BackViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void BackViewListViewMenu_CallbackFunc__Invoke(
        BackViewListViewMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void BackViewListViewMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C34E44 & 1) == 0 )
  {
    sub_1C32C20(&BackViewListViewMenu___c_TypeInfo);
    byte_4C34E44 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BackViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BackViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct BackViewListViewMenu___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BackViewListViewMenu___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BackViewListViewMenu___c___ctor(BackViewListViewMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BackViewListViewMenu___c___Open_b__14_1(
        BackViewListViewMenu___c_o *this,
        System_String_o *a,
        System_String_o *b,
        const MethodInfo *method)
{
  int32_t stringLength; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_1C32E7C(this);
  stringLength = a->fields._stringLength;
  v5 = b->fields._stringLength;
  result = stringLength - v5;
  if ( stringLength == v5 )
    return System_String__Compare(a, b, 0);
  return result;
}


void BackViewListViewMenu___c__DisplayClass14_0___ctor(
        BackViewListViewMenu___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BackViewListViewMenu___c__DisplayClass14_0___Open_b__0(
        BackViewListViewMenu___c__DisplayClass14_0_o *this,
        System_String_o *X,
        const MethodInfo *method)
{
  if ( !X )
    sub_1C32E7C(this);
  return !System_String__Contains(X, this->fields.searchStr, 0);
}