void FigureViewListViewMenu___ctor(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void FigureViewListViewMenu__Callback(FigureViewListViewMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct FigureViewListViewMenu_CallbackFunc_o *v9; // x20
  struct FigureViewListViewMenu_CallbackFunc_o *callbackFunc; // t1

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


void FigureViewListViewMenu__Close(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  FigureViewListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.figureAssetList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.figureAssetList, 0, v5, v6, v7, v8, v9, v10);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_2213CDC(listViewManager, v3);
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
      sub_2213CDC(listViewManager, method);
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
  __int64 v2; // x2

  if ( (byte_596DC58 & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DC58 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v2);
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
  __int64 v9; // x1
  __int64 v10; // x2

  if ( (byte_596DC56 & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_FigureViewListViewMenu_OnEndFigureView__);
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DC56 = 1;
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
      sub_2213CDC(listViewManager, method);
    dragParentObject = (System_String_o *)listViewManager->fields.dragParentObject;
    figureAssetList = this->fields.figureAssetList;
    v8 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(v8, (Il2CppObject *)this, Method_FigureViewListViewMenu_OnEndFigureView__, 0);
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v9, v10);
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

  if ( (byte_596DC57 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FigureViewListViewMenu_OnClickItem__);
    byte_596DC57 = 1;
  }
  if ( this->fields.state == 3 )
  {
    listViewManager = this->fields.listViewManager;
    this->fields.state = 2;
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FigureViewListViewMenu_OnClickItem__, 0);
    if ( !listViewManager
      || (FigureViewListViewManager__SetMode_44285232(listViewManager, 1, v5, v8),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
    {
      sub_2213CDC(cancelButton, v7);
    }
    UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
  }
}


void FigureViewListViewMenu__OnSearchLabelChange(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  FigureViewListViewMenu_CallbackFunc_o *callbackFunc; // x1
  const MethodInfo *v11; // x2

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_2213CDC(0, method);
  ListViewManager__DestroyList(listViewManager, 0);
  this->fields.figureAssetList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.figureAssetList, 0, v4, v5, v6, v7, v8, v9);
  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  FigureViewListViewMenu__Open(this, callbackFunc, v11);
}


void FigureViewListViewMenu__Open(
        FigureViewListViewMenu_o *this,
        FigureViewListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t state; // w8
  __int64 v6; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x21
  System_Collections_Generic_List_object__o *v16; // x20
  __int64 v17; // x1
  void *rootObject; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o **v25; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Predicate_object__o *v33; // x23
  struct FigureViewListViewMenu___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__12_1; // x22
  Il2CppObject *v36; // x23
  struct FigureViewListViewMenu___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct System_String_array *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  const MethodInfo *v51; // x3
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596DC54 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&System_Comparison_string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Sort___91665632);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor___91665488);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&System_Predicate_string__TypeInfo);
    sub_2213A60(&Method_FigureViewListViewMenu___c__Open_b__12_1__);
    sub_2213A60(&Method_FigureViewListViewMenu___c__DisplayClass12_0__Open_b__0__);
    sub_2213A60(&FigureViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    sub_2213A60(&FigureViewListViewMenu___c_TypeInfo);
    sub_2213A60(&StringLiteral_4550/*"CharaFigure"*/);
    byte_596DC54 = 1;
  }
  state = this->fields.state;
  result = 0;
  if ( !state )
  {
    v6 = sub_2213CCC(FigureViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13, v14);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_4550/*"CharaFigure"*/,
                                                                        0);
    v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_71841080(
      v16,
      AssetStorageList,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_string___ctor___91665488);
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
            if ( v6 )
            {
              *(_QWORD *)(v6 + 16) = rootObject;
              v25 = (System_String_o **)(v6 + 16);
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v6 + 16),
                (int32_t)rootObject,
                v19,
                v20,
                v21,
                v22,
                v23,
                v24);
              v26 = *(System_String_o **)(v6 + 16);
              result = 0;
              if ( System_String__IsNullOrEmpty(v26, 0) || !System_Int32__TryParse(*v25, &result, 0) )
              {
                *v25 = 0;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), 0, v27, v28, v29, v30, v31, v32);
              }
              if ( *v25 )
              {
                v33 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_string__TypeInfo);
                System_Predicate_object____ctor(
                  v33,
                  (Il2CppObject *)v6,
                  Method_FigureViewListViewMenu___c__DisplayClass12_0__Open_b__0__,
                  0);
                if ( !v16 )
                  goto LABEL_27;
                System_Collections_Generic_List_object___RemoveAll(
                  v16,
                  (System_Predicate_T__o *)v33,
                  (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_string__RemoveAll__);
              }
              rootObject = FigureViewListViewMenu___c_TypeInfo;
              if ( !*(&FigureViewListViewMenu___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(FigureViewListViewMenu___c_TypeInfo, v17, v27);
                rootObject = FigureViewListViewMenu___c_TypeInfo;
              }
              static_fields = (struct FigureViewListViewMenu___c_StaticFields *)*((_QWORD *)rootObject + 23);
              _9__12_1 = (System_Comparison_T__o *)static_fields->__9__12_1;
              if ( !_9__12_1 )
              {
                if ( !*((_DWORD *)rootObject + 57) )
                {
                  j_il2cpp_runtime_class_init_0(rootObject, v17, v27);
                  static_fields = FigureViewListViewMenu___c_TypeInfo->static_fields;
                }
                v36 = (Il2CppObject *)static_fields->__9;
                _9__12_1 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_string__TypeInfo);
                System_Comparison_object____ctor(_9__12_1, v36, Method_FigureViewListViewMenu___c__Open_b__12_1__, 0);
                v37 = FigureViewListViewMenu___c_TypeInfo->static_fields;
                v37->__9__12_1 = (struct System_Comparison_string__o *)_9__12_1;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v37->__9__12_1,
                  (int32_t)_9__12_1,
                  v38,
                  v39,
                  v40,
                  v41,
                  v42,
                  v43);
              }
              if ( v16 )
              {
                System_Collections_Generic_List_object___Sort_71849708(
                  v16,
                  _9__12_1,
                  (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_string__Sort___91665632);
                v44 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                                      v16,
                                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
                this->fields.figureAssetList = v44;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.figureAssetList,
                  (int32_t)v44,
                  v45,
                  v46,
                  v47,
                  v48,
                  v49,
                  v50);
                rootObject = this->fields.listViewManager;
                if ( rootObject )
                {
                  FigureViewListViewManager__CreateList(
                    (FigureViewListViewManager_o *)rootObject,
                    this->fields.figureAssetList,
                    *v25,
                    v51);
                  goto LABEL_26;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_2213CDC(rootObject, v17);
  }
LABEL_26:
  FigureViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void FigureViewListViewMenu__StartInput(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  FigureViewListViewManager_o *listViewManager; // x20
  System_Action_o *v5; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_596DC55 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FigureViewListViewMenu_OnClickItem__);
    byte_596DC55 = 1;
  }
  v3 = System_Action_TypeInfo;
  listViewManager = this->fields.listViewManager;
  this->fields.state = 2;
  v5 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FigureViewListViewMenu_OnClickItem__, 0);
  if ( !listViewManager
    || (FigureViewListViewManager__SetMode_44285232(listViewManager, 1, v5, v8),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
  {
    sub_2213CDC(cancelButton, v7);
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
}


void FigureViewListViewMenu__StartMenu(FigureViewListViewMenu_o *this, const MethodInfo *method)
{
  FigureViewListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_596DC53 & 1) == 0 )
  {
    sub_2213A60(&FigureViewListViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_FigureViewListViewMenu__StartMenu_b__11_0__);
    byte_596DC53 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (FigureViewListViewMenu_CallbackFunc_o *)sub_2213CCC(FigureViewListViewMenu_CallbackFunc_TypeInfo);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FigureViewListViewMenu_o *v13; // x0
  FigureViewListViewMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DC51 & 1) == 0 )
  {
    sub_2213A60(&FigureViewListViewMenu_CallbackFunc_TypeInfo);
    byte_596DC51 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, FigureViewListViewMenu_CallbackFunc_TypeInfo, v9, v10);
  FigureViewListViewMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FigureViewListViewMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596DC52 & 1) == 0 )
  {
    sub_2213A60(&FigureViewListViewMenu_CallbackFunc_TypeInfo);
    byte_596DC52 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, FigureViewListViewMenu_CallbackFunc_TypeInfo, v9, v10);
  FigureViewListViewMenu__StartMenu(v13, v14);
}


void FigureViewListViewMenu_CallbackFunc___ctor(
        FigureViewListViewMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_2008318;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_20082D0;
}


System_IAsyncResult_o *FigureViewListViewMenu_CallbackFunc__BeginInvoke(
        FigureViewListViewMenu_CallbackFunc_o *this,
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
  return sub_2213A14(this, v9, callback, object);
}


void FigureViewListViewMenu_CallbackFunc__EndInvoke(
        FigureViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596DC59 & 1) == 0 )
  {
    sub_2213A60(&FigureViewListViewMenu___c_TypeInfo);
    byte_596DC59 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(FigureViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FigureViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct FigureViewListViewMenu___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)FigureViewListViewMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, a);
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
    sub_2213CDC(this, 0);
  return !System_String__Contains(X, this->fields.searchStr, 0);
}