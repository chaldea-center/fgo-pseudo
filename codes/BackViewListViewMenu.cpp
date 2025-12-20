void BackViewListViewMenu___ctor(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void BackViewListViewMenu__Callback(BackViewListViewMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct BackViewListViewMenu_CallbackFunc_o *v9; // x20
  struct BackViewListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void BackViewListViewMenu__Close(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  BackViewListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.backAssetList = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.backAssetList, 0, v5, v6, v7, v8, v9, v10);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1C942F0(listViewManager, v3);
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
      sub_1C942F0(listViewManager, method);
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
  if ( (byte_4D29C82 & 1) == 0 )
  {
    sub_1C94098(&ScriptManager_TypeInfo);
    byte_4D29C82 = 1;
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

  if ( (byte_4D29C83 & 1) == 0 )
  {
    sub_1C94098(&ScriptManager_TypeInfo);
    byte_4D29C83 = 1;
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
    sub_1C942F0(forceObi169Sprite, method);
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

  if ( (byte_4D29C80 & 1) == 0 )
  {
    sub_1C94098(&Method_BackViewListViewMenu_OnEndBackView__);
    sub_1C94098(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C94098(&ScriptManager_TypeInfo);
    byte_4D29C80 = 1;
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
      sub_1C942F0(listViewManager, method);
    dragParentObject = (System_String_o *)listViewManager->fields.dragParentObject;
    backAssetList = this->fields.backAssetList;
    v8 = (ScriptManager_CallbackFunc_o *)sub_1C942E4(ScriptManager_CallbackFunc_TypeInfo);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4D29C81 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BackViewListViewMenu_OnClickItem__);
    byte_4D29C81 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_BackViewListViewMenu_OnClickItem__, 0);
    if ( !listViewManager
      || (BackViewListViewManager__SetMode_38052484(listViewManager, 1, v5, v8),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
    {
      sub_1C942F0(cancelButton, v7);
    }
    UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
  }
}


void BackViewListViewMenu__OnSearchLabelChange(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  BackViewListViewMenu_CallbackFunc_o *callbackFunc; // x1
  const MethodInfo *v11; // x2

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C942F0(0, method);
  ListViewManager__DestroyList(listViewManager, 0);
  this->fields.backAssetList = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.backAssetList, 0, v4, v5, v6, v7, v8, v9);
  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  BackViewListViewMenu__Open(this, callbackFunc, v11);
}


void BackViewListViewMenu__Open(
        BackViewListViewMenu_o *this,
        BackViewListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x22
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  void *rootObject; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  _QWORD *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Predicate_object__o *v29; // x22
  System_Comparison_T__o *v30; // x21
  Il2CppObject *v31; // x22
  struct BackViewListViewMenu___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct System_String_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  const MethodInfo *v46; // x2

  if ( (byte_4D29C7E & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&System_Comparison_string__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Sort___79007112);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor___79006968);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&System_Predicate_string__TypeInfo);
    sub_1C94098(&Method_BackViewListViewMenu___c__Open_b__14_1__);
    sub_1C94098(&Method_BackViewListViewMenu___c__DisplayClass14_0__Open_b__0__);
    sub_1C94098(&BackViewListViewMenu___c__DisplayClass14_0_TypeInfo);
    sub_1C94098(&BackViewListViewMenu___c_TypeInfo);
    sub_1C94098(&StringLiteral_3029/*"Back"*/);
    byte_4D29C7E = 1;
  }
  if ( !this->fields.state )
  {
    v5 = sub_1C942E4(BackViewListViewMenu___c__DisplayClass14_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    this->fields.callbackFunc = callback;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)callback, v6, v7, v8, v9, v10, v11);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_3029/*"Back"*/,
                                                                        0);
    v13 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_59156264(
      v13,
      AssetStorageList,
      (const MethodInfo_386A728 *)Method_System_Collections_Generic_List_string___ctor___79006968);
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
              v22 = (_QWORD *)(v5 + 16);
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)rootObject, v16, v17, v18, v19, v20, v21);
              if ( System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 16), 0) )
              {
                *v22 = 0;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), 0, v23, v24, v25, v26, v27, v28);
              }
              if ( *v22 )
              {
                v29 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_string__TypeInfo);
                System_Predicate_object____ctor(
                  v29,
                  (Il2CppObject *)v5,
                  Method_BackViewListViewMenu___c__DisplayClass14_0__Open_b__0__,
                  0);
                if ( !v13 )
                  goto LABEL_26;
                System_Collections_Generic_List_object___RemoveAll(
                  v13,
                  (System_Predicate_T__o *)v29,
                  (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_string__RemoveAll__);
              }
              rootObject = BackViewListViewMenu___c_TypeInfo;
              if ( !BackViewListViewMenu___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BackViewListViewMenu___c_TypeInfo);
                rootObject = BackViewListViewMenu___c_TypeInfo;
              }
              v30 = *(System_Comparison_T__o **)(*((_QWORD *)rootObject + 23) + 8LL);
              if ( !v30 )
              {
                if ( !*((_DWORD *)rootObject + 56) )
                {
                  j_il2cpp_runtime_class_init_0(rootObject);
                  rootObject = BackViewListViewMenu___c_TypeInfo;
                }
                v31 = (Il2CppObject *)**((_QWORD **)rootObject + 23);
                v30 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_string__TypeInfo);
                System_Comparison_object____ctor(v30, v31, Method_BackViewListViewMenu___c__Open_b__14_1__, 0);
                static_fields = BackViewListViewMenu___c_TypeInfo->static_fields;
                static_fields->__9__14_1 = (struct System_Comparison_string__o *)v30;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)&static_fields->__9__14_1,
                  (int32_t)v30,
                  v33,
                  v34,
                  v35,
                  v36,
                  v37,
                  v38);
              }
              if ( v13 )
              {
                System_Collections_Generic_List_object___Sort_59164920(
                  v13,
                  v30,
                  (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_string__Sort___79007112);
                v39 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                                      v13,
                                                      (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
                this->fields.backAssetList = v39;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)&this->fields.backAssetList,
                  (int32_t)v39,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44,
                  v45);
                rootObject = this->fields.listViewManager;
                if ( rootObject )
                {
                  BackViewListViewManager__CreateList(
                    (BackViewListViewManager_o *)rootObject,
                    this->fields.backAssetList,
                    v46);
                  goto LABEL_25;
                }
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1C942F0(rootObject, v14);
  }
LABEL_25:
  BackViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void BackViewListViewMenu__StartInput(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  BackViewListViewManager_o *listViewManager; // x20
  System_Action_o *v4; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  UnityEngine_Behaviour_o *forceObi169Sprite; // x19

  if ( (byte_4D29C7F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BackViewListViewMenu_OnClickItem__);
    sub_1C94098(&ScriptManager_TypeInfo);
    byte_4D29C7F = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BackViewListViewMenu_OnClickItem__, 0);
  if ( !listViewManager )
    goto LABEL_10;
  BackViewListViewManager__SetMode_38052484(listViewManager, 1, v4, v7);
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
    sub_1C942F0(cancelButton, v6);
  UnityEngine_Behaviour__set_enabled(forceObi169Sprite, ScriptManager_TypeInfo->static_fields->defaultForceObi_16_9, 0);
}


void BackViewListViewMenu__StartMenu(BackViewListViewMenu_o *this, const MethodInfo *method)
{
  BackViewListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4D29C7D & 1) == 0 )
  {
    sub_1C94098(&Method_BackViewListViewMenu__StartMenu_b__13_0__);
    sub_1C94098(&BackViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4D29C7D = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (BackViewListViewMenu_CallbackFunc_o *)sub_1C942E4(BackViewListViewMenu_CallbackFunc_TypeInfo);
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

  if ( (byte_4D29C7B & 1) == 0 )
  {
    sub_1C94098(&BackViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4D29C7B = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
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

  if ( (byte_4D29C7C & 1) == 0 )
  {
    sub_1C94098(&BackViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4D29C7C = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  BackViewListViewMenu__StartMenu(v11, v12);
}


void BackViewListViewMenu_CallbackFunc___ctor(
        BackViewListViewMenu_CallbackFunc_o *this,
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
  sub_1C9403C(
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
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC5580;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC5538;
}


System_IAsyncResult_o *BackViewListViewMenu_CallbackFunc__BeginInvoke(
        BackViewListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4D29C84 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D29C84 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void BackViewListViewMenu_CallbackFunc__EndInvoke(
        BackViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D29C85 & 1) == 0 )
  {
    sub_1C94098(&BackViewListViewMenu___c_TypeInfo);
    byte_4D29C85 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BackViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BackViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct BackViewListViewMenu___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BackViewListViewMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C942F0(this, a);
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
    sub_1C942F0(this, 0);
  return !System_String__Contains(X, this->fields.searchStr, 0);
}