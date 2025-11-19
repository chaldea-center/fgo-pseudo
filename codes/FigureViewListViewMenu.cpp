void FigureViewListViewMenu___ctor(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void FigureViewListViewMenu__Callback(FigureViewListViewMenu_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct FigureViewListViewMenu_CallbackFunc_o *v5; // x20
  struct FigureViewListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C6B9AC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void FigureViewListViewMenu__Close(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  FigureViewListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.figureAssetList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.figureAssetList, 0, v5, v6);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1C6BC60(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void FigureViewListViewMenu__EndInput(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.cancelButton) == 0) )
    {
      sub_1C6BC60(listViewManager, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0);
  }
}


void FigureViewListViewMenu__OnClickCancel(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 2 )
  {
    FigureViewListViewMenu__EndInput(this, method);
    this->fields.state = 4;
    FigureViewListViewMenu__Callback(this, 0, v3);
  }
}


void FigureViewListViewMenu__OnClickClear(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CB37E5 & 1) == 0 )
  {
    sub_1C6BA08(&ScriptManager_TypeInfo);
    byte_4CB37E5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__FigureViewClear(0);
  }
}


void FigureViewListViewMenu__OnClickItem(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FigureViewListViewManager_o *listViewManager; // x0
  int32_t callbackIndex; // w1
  System_String_o *dragParentObject; // x20
  System_String_array *figureAssetList; // x21
  ScriptManager_CallbackFunc_o *v8; // x22

  if ( (byte_4CB37E3 & 1) == 0 )
  {
    sub_1C6BA08(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_FigureViewListViewMenu_OnEndFigureView__);
    sub_1C6BA08(&ScriptManager_TypeInfo);
    byte_4CB37E3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_11;
    callbackIndex = listViewManager->fields.callbackIndex;
    if ( callbackIndex < 0 )
      return;
    listViewManager = (FigureViewListViewManager_o *)FigureViewListViewManager__GetItem(
                                                       listViewManager,
                                                       callbackIndex,
                                                       v2);
    this->fields.state = 3;
    if ( !listViewManager )
LABEL_11:
      sub_1C6BC60(listViewManager, method);
    dragParentObject = (System_String_o *)listViewManager->fields.dragParentObject;
    figureAssetList = this->fields.figureAssetList;
    v8 = (ScriptManager_CallbackFunc_o *)sub_1C6BC54(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(v8, (Il2CppObject *)this, Method_FigureViewListViewMenu_OnEndFigureView__, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__FigureViewPlay(dragParentObject, figureAssetList, v8, 0);
  }
}


void FigureViewListViewMenu__OnEndFigureView(FigureViewListViewMenu_o *this, bool isExit, const MethodInfo *method)
{
  FigureViewListViewManager_o *listViewManager; // x20
  System_Action_o *v5; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4CB37E4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_FigureViewListViewMenu_OnClickItem__);
    byte_4CB37E4 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FigureViewListViewMenu_OnClickItem__, 0);
    if ( !listViewManager
      || (FigureViewListViewManager__SetMode_37613904(listViewManager, 1, v5, v8),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
    {
      sub_1C6BC60(cancelButton, v7);
    }
    UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
  }
}


void FigureViewListViewMenu__OnSearchLabelChange(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  FigureViewListViewMenu_CallbackFunc_o *callbackFunc; // x1
  const MethodInfo *v7; // x2

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C6BC60(0, method);
  ListViewManager__DestroyList(listViewManager, 0);
  this->fields.figureAssetList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.figureAssetList, 0, v4, v5);
  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  FigureViewListViewMenu__Open(this, callbackFunc, v7);
}


void FigureViewListViewMenu__Open(
        FigureViewListViewMenu_o *this,
        FigureViewListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x21
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  void *rootObject; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o **v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Predicate_object__o *v17; // x23
  System_Comparison_T__o *v18; // x22
  Il2CppObject *v19; // x23
  struct FigureViewListViewMenu___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_String_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB37E1 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&System_Comparison_string__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Sort___78530560);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor___78530416);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&System_Predicate_string__TypeInfo);
    sub_1C6BA08(&Method_FigureViewListViewMenu___c__Open_b__12_1__);
    sub_1C6BA08(&Method_FigureViewListViewMenu___c__DisplayClass12_0__Open_b__0__);
    sub_1C6BA08(&FigureViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    sub_1C6BA08(&FigureViewListViewMenu___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_4369/*"CharaFigure"*/);
    byte_4CB37E1 = 1;
  }
  result = 0;
  if ( !this->fields.state )
  {
    v5 = sub_1C6BC54(FigureViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    this->fields.callbackFunc = callback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v6, v7);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_4369/*"CharaFigure"*/,
                                                                        0);
    v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_58720872(
      v9,
      AssetStorageList,
      (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_string___ctor___78530416);
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
              v14 = (System_String_o **)(v5 + 16);
              sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)rootObject, v12, v13);
              result = 0;
              if ( System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 16), 0)
                || !System_Int32__TryParse(*v14, &result, 0) )
              {
                *v14 = 0;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), 0, v15, v16);
              }
              if ( *v14 )
              {
                v17 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_string__TypeInfo);
                System_Predicate_object____ctor(
                  v17,
                  (Il2CppObject *)v5,
                  Method_FigureViewListViewMenu___c__DisplayClass12_0__Open_b__0__,
                  0);
                if ( !v9 )
                  goto LABEL_27;
                System_Collections_Generic_List_object___RemoveAll(
                  v9,
                  (System_Predicate_T__o *)v17,
                  (const MethodInfo_3801FD0 *)Method_System_Collections_Generic_List_string__RemoveAll__);
              }
              rootObject = FigureViewListViewMenu___c_TypeInfo;
              if ( !FigureViewListViewMenu___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FigureViewListViewMenu___c_TypeInfo);
                rootObject = FigureViewListViewMenu___c_TypeInfo;
              }
              v18 = *(System_Comparison_T__o **)(*((_QWORD *)rootObject + 23) + 8LL);
              if ( !v18 )
              {
                if ( !*((_DWORD *)rootObject + 56) )
                {
                  j_il2cpp_runtime_class_init_0(rootObject);
                  rootObject = FigureViewListViewMenu___c_TypeInfo;
                }
                v19 = (Il2CppObject *)**((_QWORD **)rootObject + 23);
                v18 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_string__TypeInfo);
                System_Comparison_object____ctor(v18, v19, Method_FigureViewListViewMenu___c__Open_b__12_1__, 0);
                static_fields = FigureViewListViewMenu___c_TypeInfo->static_fields;
                static_fields->__9__12_1 = (struct System_Comparison_string__o *)v18;
                sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__12_1, (int32_t)v18, v21, v22);
              }
              if ( v9 )
              {
                System_Collections_Generic_List_object___Sort_58729528(
                  v9,
                  v18,
                  (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_string__Sort___78530560);
                v23 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                                      v9,
                                                      (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
                this->fields.figureAssetList = v23;
                sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.figureAssetList, (int32_t)v23, v24, v25);
                rootObject = this->fields.listViewManager;
                if ( rootObject )
                {
                  FigureViewListViewManager__CreateList(
                    (FigureViewListViewManager_o *)rootObject,
                    this->fields.figureAssetList,
                    *v14,
                    v26);
                  goto LABEL_26;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C6BC60(rootObject, v10);
  }
LABEL_26:
  FigureViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void FigureViewListViewMenu__StartInput(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  FigureViewListViewManager_o *listViewManager; // x20
  System_Action_o *v4; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4CB37E2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_FigureViewListViewMenu_OnClickItem__);
    byte_4CB37E2 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FigureViewListViewMenu_OnClickItem__, 0);
  if ( !listViewManager
    || (FigureViewListViewManager__SetMode_37613904(listViewManager, 1, v4, v7),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
  {
    sub_1C6BC60(cancelButton, v6);
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
}


void FigureViewListViewMenu__StartMenu(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  FigureViewListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4CB37E0 & 1) == 0 )
  {
    sub_1C6BA08(&FigureViewListViewMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_FigureViewListViewMenu__StartMenu_b__11_0__);
    byte_4CB37E0 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (FigureViewListViewMenu_CallbackFunc_o *)sub_1C6BC54(FigureViewListViewMenu_CallbackFunc_TypeInfo);
  FigureViewListViewMenu_CallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FigureViewListViewMenu__StartMenu_b__11_0__,
    v4);
  FigureViewListViewMenu__Open(this, v3, v5);
}


void FigureViewListViewMenu__add_callbackFunc(
        FigureViewListViewMenu_o *this,
        FigureViewListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FigureViewListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FigureViewListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FigureViewListViewMenu_o *v11; // x0
  FigureViewListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB37DE & 1) == 0 )
  {
    sub_1C6BA08(&FigureViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4CB37DE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (FigureViewListViewMenu_CallbackFunc_c *)v8->klass != FigureViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  FigureViewListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void FigureViewListViewMenu__remove_callbackFunc(
        FigureViewListViewMenu_o *this,
        FigureViewListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FigureViewListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FigureViewListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FigureViewListViewMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CB37DF & 1) == 0 )
  {
    sub_1C6BA08(&FigureViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4CB37DF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (FigureViewListViewMenu_CallbackFunc_c *)v8->klass != FigureViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  FigureViewListViewMenu__StartMenu(v11, v12);
}


void FigureViewListViewMenu_CallbackFunc___ctor(
        FigureViewListViewMenu_CallbackFunc_o *this,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9E914;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9E8CC;
}


System_IAsyncResult_o *FigureViewListViewMenu_CallbackFunc__BeginInvoke(
        FigureViewListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CB37E6 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB37E6 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void FigureViewListViewMenu_CallbackFunc__EndInvoke(
        FigureViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void FigureViewListViewMenu_CallbackFunc__Invoke(
        FigureViewListViewMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void FigureViewListViewMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB37E7 & 1) == 0 )
  {
    sub_1C6BA08(&FigureViewListViewMenu___c_TypeInfo);
    byte_4CB37E7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(FigureViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FigureViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct FigureViewListViewMenu___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)FigureViewListViewMenu___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void FigureViewListViewMenu___c___ctor(FigureViewListViewMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t FigureViewListViewMenu___c___Open_b__12_1(
        FigureViewListViewMenu___c_o *this,
        System_String_o *a,
        System_String_o *b,
        const MethodInfo *method)
{
  int32_t stringLength; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_1C6BC60(this, a);
  stringLength = a->fields._stringLength;
  v5 = b->fields._stringLength;
  result = stringLength - v5;
  if ( stringLength == v5 )
    return System_String__Compare(a, b, 0);
  return result;
}


void FigureViewListViewMenu___c__DisplayClass12_0___ctor(
        FigureViewListViewMenu___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool FigureViewListViewMenu___c__DisplayClass12_0___Open_b__0(
        FigureViewListViewMenu___c__DisplayClass12_0_o *this,
        System_String_o *X,
        const MethodInfo *method)
{
  if ( !X )
    sub_1C6BC60(this, 0);
  return !System_String__Contains(X, this->fields.searchStr, 0);
}