void ScriptAssetListViewMenu___ctor(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void ScriptAssetListViewMenu__Callback(ScriptAssetListViewMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ScriptAssetListViewMenu_CallbackFunc_o *v9; // x20
  struct ScriptAssetListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void ScriptAssetListViewMenu__Close(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0

  ScriptAssetListViewMenu__EndInput(this, method);
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
    sub_21FFECC(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void ScriptAssetListViewMenu__EndInput(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.scriptTestAssetCancelButton) == 0) )
    {
      sub_21FFECC(listViewManager, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0);
  }
}


void ScriptAssetListViewMenu__EndPlayScriptDebug(
        ScriptAssetListViewMenu_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ScriptObjectListViewMenu_CallbackFunc_c *v6; // x0
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x20
  System_String_o *selectAssetPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3

  if ( (byte_5935B7C & 1) == 0 )
  {
    sub_21FFC50(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ScriptAssetListViewMenu_OnEndSelectObject__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5935B7C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein((CommonUI_o *)Instance, 0.1, 0, 0),
        v6 = ScriptObjectListViewMenu_CallbackFunc_TypeInfo,
        scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu,
        selectAssetPath = this->fields.selectAssetPath,
        this->fields.state = 3,
        v9 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_21FFEBC(v6),
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          v10),
        !scriptObjectListViewMenu) )
  {
    sub_21FFECC(Instance, v5);
  }
  ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v9, v11);
}


void ScriptAssetListViewMenu__OnClickCancel(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 2 )
  {
    ScriptAssetListViewMenu__EndInput(this, method);
    this->fields.state = 5;
    ScriptAssetListViewMenu__Callback(this, 0, v3);
  }
}


void ScriptAssetListViewMenu__OnClickItem(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ScriptAssetListViewManager_o *listViewManager; // x0
  int32_t callbackIndex; // w1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_String_o *dragParentObject; // x1
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x20
  System_String_o *selectAssetPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v15; // x22
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3

  if ( (byte_5935B7A & 1) == 0 )
  {
    sub_21FFC50(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ScriptAssetListViewMenu_OnEndSelectObject__);
    byte_5935B7A = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_10;
    callbackIndex = listViewManager->fields.callbackIndex;
    if ( (callbackIndex & 0x80000000) == 0 )
    {
      listViewManager = (ScriptAssetListViewManager_o *)ScriptAssetListViewManager__GetItem(
                                                          listViewManager,
                                                          callbackIndex,
                                                          v2);
      if ( listViewManager )
      {
        dragParentObject = (struct System_String_o *)listViewManager->fields.dragParentObject;
        this->fields.selectAssetPath = dragParentObject;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.selectAssetPath,
          (int32_t)dragParentObject,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu;
        selectAssetPath = this->fields.selectAssetPath;
        this->fields.state = 3;
        v15 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_21FFEBC(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          v16);
        if ( scriptObjectListViewMenu )
        {
          ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v15, v17);
          return;
        }
      }
LABEL_10:
      sub_21FFECC(listViewManager, method);
    }
  }
}


// positive sp value has been detected, the output may be wrong!
void ScriptAssetListViewMenu__OnEndSelectObject(
        ScriptAssetListViewMenu_o *this,
        int32_t result,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_String_o *selectObjectPath; // x1
  System_String_o *selectAssetPath; // x21
  System_String_o **v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_String_o *v34; // x22
  System_String_o *StartModeForAssetStorage; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x21
  System_String_o *v50; // x22
  ScriptManager_CallbackBranchList_o *v51; // x23
  __int64 v52; // x1
  __int64 v53; // x2
  ScriptAssetListViewManager_o *listViewManager; // x20
  System_Action_o *v55; // x21
  const MethodInfo *v56; // x3

  if ( (byte_5935B7B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ScriptManager_CallbackBranchList_TypeInfo);
    sub_21FFC50(&Method_ScriptAssetListViewMenu_OnClickItem__);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__);
    sub_21FFC50(&ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935B7B = 1;
  }
  v7 = sub_21FFEBC(ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( this->fields.state != 3 )
    return;
  scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu;
  if ( (result & 0xFFFFFFFE) != 2 )
  {
    if ( scriptObjectListViewMenu )
    {
      ScriptObjectListViewMenu__Close(scriptObjectListViewMenu, v9);
      listViewManager = this->fields.listViewManager;
      this->fields.state = 2;
      v55 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v55, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0);
      if ( listViewManager )
      {
        ScriptAssetListViewManager__SetMode_44292600(listViewManager, 1, v55, v56);
        scriptObjectListViewMenu = (ScriptObjectListViewMenu_o *)this->fields.scriptTestAssetCancelButton;
        if ( scriptObjectListViewMenu )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptObjectListViewMenu, 1, 0);
          return;
        }
      }
    }
LABEL_24:
    sub_21FFECC(scriptObjectListViewMenu, v9);
  }
  if ( !scriptObjectListViewMenu )
    goto LABEL_24;
  *(_DWORD *)(v7 + 32) = ScriptObjectListViewMenu__GetJumpLine(scriptObjectListViewMenu, v9);
  this->fields.selectObjectPath = path;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectObjectPath,
    (int32_t)path,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  selectAssetPath = this->fields.selectAssetPath;
  selectObjectPath = this->fields.selectObjectPath;
  *(_QWORD *)(v7 + 24) = selectObjectPath;
  v24 = (System_String_o **)(v7 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)selectObjectPath, v25, v26, v27, v28, v29, v30);
  scriptObjectListViewMenu = (ScriptObjectListViewMenu_o *)ScriptManager_TypeInfo;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v9, v31);
  if ( !selectAssetPath )
    goto LABEL_24;
  if ( System_String__StartsWith(selectAssetPath, ScriptManager_TypeInfo->static_fields->textPath, 0)
    && System_String__op_Inequality(*v24, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    v34 = *v24;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v32, v33);
    StartModeForAssetStorage = ScriptManager__GetStartModeForAssetStorage(selectAssetPath, v34, 0);
    *(_QWORD *)(v7 + 40) = StartModeForAssetStorage;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v7 + 40),
      (int32_t)StartModeForAssetStorage,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    v42 = System_String__IndexOf_75501892(selectAssetPath, (System_String_o *)StringLiteral_1123/*"/"*/, 0);
    this->fields.state = 4;
    if ( (v42 & 0x80000000) == 0 )
      selectAssetPath = System_String__Substring(selectAssetPath, v42 + 1, 0);
    *(_QWORD *)(v7 + 48) = selectAssetPath;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)selectAssetPath, v43, v44, v45, v46, v47, v48);
    v49 = *(System_String_o **)(v7 + 48);
    v50 = *(System_String_o **)(v7 + 24);
    v51 = (ScriptManager_CallbackBranchList_o *)sub_21FFEBC(ScriptManager_CallbackBranchList_TypeInfo);
    ScriptManager_CallbackBranchList___ctor(
      v51,
      (Il2CppObject *)v7,
      Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__,
      0);
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v52, v53);
    ScriptManager__DebugScriptLoad(v49, v50, v51, 0);
  }
}


void ScriptAssetListViewMenu__Open(
        ScriptAssetListViewMenu_o *this,
        ScriptAssetListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *scriptTestAssetRootObject; // x0

  state = this->fields.state;
  if ( state == 6 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
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
      sub_21FFECC(scriptTestAssetRootObject, v10);
    }
    ScriptAssetListViewManager__CreateList((ScriptAssetListViewManager_o *)scriptTestAssetRootObject, v10);
  }
  this->fields.state = 1;
  ScriptAssetListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void ScriptAssetListViewMenu__StartInput(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  ScriptAssetListViewManager_o *listViewManager; // x20
  System_Action_o *v5; // x21
  UnityEngine_Behaviour_o *scriptTestAssetCancelButton; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_5935B79 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ScriptAssetListViewMenu_OnClickItem__);
    byte_5935B79 = 1;
  }
  v3 = System_Action_TypeInfo;
  listViewManager = this->fields.listViewManager;
  this->fields.state = 2;
  v5 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0);
  if ( !listViewManager
    || (ScriptAssetListViewManager__SetMode_44292600(listViewManager, 1, v5, v8),
        (scriptTestAssetCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestAssetCancelButton) == 0) )
  {
    sub_21FFECC(scriptTestAssetCancelButton, v7);
  }
  UnityEngine_Behaviour__set_enabled(scriptTestAssetCancelButton, 1, 0);
}


void ScriptAssetListViewMenu__StartMenu(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  ScriptAssetListViewMenu_CallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_5935B76 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ScriptAssetListViewMenu__StartMenu_b__9_0__);
    sub_21FFC50(&StringLiteral_13134/*"ScriptActionEncrypt"*/);
    byte_5935B76 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3, v4);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_13134/*"ScriptActionEncrypt"*/, 0);
  v5 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_21FFEBC(ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
  ScriptAssetListViewMenu_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ScriptAssetListViewMenu__StartMenu_b__9_0__,
    v6);
  ScriptAssetListViewMenu__Open(this, v5, v7);
}


void ScriptAssetListViewMenu__add_callbackFunc(
        ScriptAssetListViewMenu_o *this,
        ScriptAssetListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptAssetListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptAssetListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptAssetListViewMenu_o *v13; // x0
  ScriptAssetListViewMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5935B77 & 1) == 0 )
  {
    sub_21FFC50(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    byte_5935B77 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptAssetListViewMenu_CallbackFunc_c *)v8->klass != ScriptAssetListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, ScriptAssetListViewMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptAssetListViewMenu__remove_callbackFunc(v13, v14, v15);
}


void ScriptAssetListViewMenu__remove_callbackFunc(
        ScriptAssetListViewMenu_o *this,
        ScriptAssetListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptAssetListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptAssetListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptAssetListViewMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5935B78 & 1) == 0 )
  {
    sub_21FFC50(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    byte_5935B78 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptAssetListViewMenu_CallbackFunc_c *)v8->klass != ScriptAssetListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, ScriptAssetListViewMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptAssetListViewMenu__StartInput(v13, v14);
}


void ScriptAssetListViewMenu_CallbackFunc___ctor(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF54EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FF54A4;
}


System_IAsyncResult_o *ScriptAssetListViewMenu_CallbackFunc__BeginInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void ScriptAssetListViewMenu_CallbackFunc__EndInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void ScriptAssetListViewMenu_CallbackFunc__Invoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void ScriptAssetListViewMenu___c__DisplayClass20_0___ctor(
        ScriptAssetListViewMenu___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptAssetListViewMenu___c__DisplayClass20_0___OnEndSelectObject_b__0(
        ScriptAssetListViewMenu___c__DisplayClass20_0_o *this,
        System_Collections_Generic_List_List_string___o *list,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ScriptAssetListViewMenu___c__DisplayClass20_0_o *v5; // x20
  struct ScriptAssetListViewMenu_o *_4__this; // x8
  ScriptBranchMenu_o *scriptBranchMenu; // x21
  ScriptBranchMenu_CallbackFunc_o *_9__1; // x23
  const MethodInfo *v9; // x3
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *startMode; // x21
  System_String_o *name; // x22
  System_String_o *labelPath; // x23
  Il2CppObject *v19; // x24
  int32_t jumpLine; // w19
  ScriptManager_CallbackFunc_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2

  v5 = this;
  if ( (byte_5935B7D & 1) == 0 )
  {
    sub_21FFC50(&ScriptBranchMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&ScriptManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__);
    sub_21FFC50(&ScriptManager_TypeInfo);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_21FFC50(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__);
    byte_5935B7D = 1;
  }
  if ( list )
  {
    _4__this = v5->fields.__4__this;
    if ( !_4__this )
      goto LABEL_12;
    scriptBranchMenu = _4__this->fields.scriptBranchMenu;
    _9__1 = v5->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (ScriptBranchMenu_CallbackFunc_o *)sub_21FFEBC(ScriptBranchMenu_CallbackFunc_TypeInfo);
      ScriptBranchMenu_CallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)v5,
        Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
        v9);
      v5->fields.__9__1 = _9__1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.__9__1, (int32_t)_9__1, v10, v11, v12, v13, v14, v15);
    }
    if ( !scriptBranchMenu )
LABEL_12:
      sub_21FFECC(this, list);
    ScriptBranchMenu__Open(scriptBranchMenu, list, _9__1, v3);
  }
  else
  {
    startMode = v5->fields.startMode;
    name = v5->fields.name;
    v19 = (Il2CppObject *)v5->fields.__4__this;
    labelPath = v5->fields.labelPath;
    jumpLine = v5->fields.jumpLine;
    v21 = (ScriptManager_CallbackFunc_o *)sub_21FFEBC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(v21, v19, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0);
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v22, v23);
    ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v21, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptAssetListViewMenu___c__DisplayClass20_0___OnEndSelectObject_b__1(
        ScriptAssetListViewMenu___c__DisplayClass20_0_o *this,
        bool b,
        const MethodInfo *method)
{
  ScriptAssetListViewMenu___c__DisplayClass20_0_o *v4; // x19
  struct ScriptAssetListViewMenu_o *_4__this; // x8
  System_String_o *startMode; // x21
  System_String_o *name; // x22
  System_String_o *labelPath; // x23
  Il2CppObject *v9; // x24
  int32_t jumpLine; // w20
  ScriptManager_CallbackFunc_o *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  struct ScriptAssetListViewMenu_o *v14; // x19
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x20
  System_String_o *selectAssetPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v17; // x22
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  v4 = this;
  if ( (byte_5935B7E & 1) == 0 )
  {
    sub_21FFC50(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&ScriptManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__);
    sub_21FFC50(&Method_ScriptAssetListViewMenu_OnEndSelectObject__);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_21FFC50(&ScriptManager_TypeInfo);
    byte_5935B7E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)_4__this->fields.scriptBranchMenu;
  if ( !this )
    goto LABEL_12;
  ScriptBranchMenu__Close((ScriptBranchMenu_o *)this, (const MethodInfo *)b);
  if ( !b )
  {
    v14 = v4->fields.__4__this;
    if ( v14 )
    {
      scriptObjectListViewMenu = v14->fields.scriptObjectListViewMenu;
      selectAssetPath = v14->fields.selectAssetPath;
      v14->fields.state = 3;
      v17 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_21FFEBC(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
      ScriptObjectListViewMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)v14,
        Method_ScriptAssetListViewMenu_OnEndSelectObject__,
        v18);
      if ( scriptObjectListViewMenu )
      {
        ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v17, v19);
        return;
      }
    }
LABEL_12:
    sub_21FFECC(this, b);
  }
  startMode = v4->fields.startMode;
  name = v4->fields.name;
  v9 = (Il2CppObject *)v4->fields.__4__this;
  labelPath = v4->fields.labelPath;
  jumpLine = v4->fields.jumpLine;
  v11 = (ScriptManager_CallbackFunc_o *)sub_21FFEBC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v11, v9, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v12, v13);
  ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v11, 0);
}