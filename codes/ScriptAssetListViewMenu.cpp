void ScriptAssetListViewMenu___ctor(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void ScriptAssetListViewMenu__Callback(ScriptAssetListViewMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ScriptAssetListViewMenu_CallbackFunc_o *v9; // x20
  struct ScriptAssetListViewMenu_CallbackFunc_o *callbackFunc; // t1

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


void ScriptAssetListViewMenu__Close(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ScriptAssetListViewManager_o *listViewManager; // x0

  ScriptAssetListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ScriptAssetListViewManager__DestroyList(listViewManager, 0);
    this->fields.state = 0;
  }
  listViewManager = (ScriptAssetListViewManager_o *)this->fields.scriptTestAssetRootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1C942F0(listViewManager, v3);
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
      sub_1C942F0(listViewManager, method);
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
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x20
  System_String_o *selectAssetPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v8; // x22
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3

  if ( (byte_4D29D98 & 1) == 0 )
  {
    sub_1C94098(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_ScriptAssetListViewMenu_OnEndSelectObject__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29D98 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein((CommonUI_o *)Instance, 0.1, 0, 0),
        this->fields.state = 3,
        scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu,
        selectAssetPath = this->fields.selectAssetPath,
        v8 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1C942E4(ScriptObjectListViewMenu_CallbackFunc_TypeInfo),
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          v9),
        !scriptObjectListViewMenu) )
  {
    sub_1C942F0(Instance, v5);
  }
  ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v8, v10);
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
  ScriptAssetListViewManager_o *listViewManager; // x0
  int32_t callbackIndex; // w1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_String_o *dragParentObject; // x1
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x20
  System_String_o *selectAssetPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v14; // x22
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4D29D96 & 1) == 0 )
  {
    sub_1C94098(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_ScriptAssetListViewMenu_OnEndSelectObject__);
    byte_4D29D96 = 1;
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
                                                          0);
      if ( listViewManager )
      {
        dragParentObject = (struct System_String_o *)listViewManager->fields.dragParentObject;
        this->fields.selectAssetPath = dragParentObject;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.selectAssetPath,
          (int32_t)dragParentObject,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10);
        scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu;
        this->fields.state = 3;
        selectAssetPath = this->fields.selectAssetPath;
        v14 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1C942E4(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          v15);
        if ( scriptObjectListViewMenu )
        {
          ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v14, v16);
          return;
        }
      }
LABEL_10:
      sub_1C942F0(listViewManager, method);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_String_o *selectObjectPath; // x1
  System_String_o *selectAssetPath; // x21
  System_String_o **v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_String_o *v31; // x22
  System_String_o *StartModeForAssetStorage; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_String_o *v46; // x21
  System_String_o *v47; // x22
  ScriptManager_CallbackBranchList_o *v48; // x23
  ScriptAssetListViewManager_o *listViewManager; // x20
  System_Action_o *v50; // x21

  if ( (byte_4D29D97 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ScriptManager_CallbackBranchList_TypeInfo);
    sub_1C94098(&Method_ScriptAssetListViewMenu_OnClickItem__);
    sub_1C94098(&ScriptManager_TypeInfo);
    sub_1C94098(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__);
    sub_1C94098(&ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29D97 = 1;
  }
  v7 = sub_1C942E4(ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_23;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( this->fields.state != 3 )
    return;
  scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu;
  if ( !scriptObjectListViewMenu )
LABEL_23:
    sub_1C942F0(scriptObjectListViewMenu, v9);
  if ( (result & 0xFFFFFFFE) != 2 )
  {
    ScriptObjectListViewMenu__Close(scriptObjectListViewMenu, v9);
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v50 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v50, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0);
    if ( listViewManager )
    {
      ScriptAssetListViewManager__SetMode_38137400(listViewManager, 1, v50, 0);
      scriptObjectListViewMenu = (ScriptObjectListViewMenu_o *)this->fields.scriptTestAssetCancelButton;
      if ( scriptObjectListViewMenu )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptObjectListViewMenu, 1, 0);
        return;
      }
    }
    goto LABEL_23;
  }
  *(_DWORD *)(v7 + 32) = ScriptObjectListViewMenu__GetJumpLine(scriptObjectListViewMenu, v9);
  this->fields.selectObjectPath = path;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectObjectPath,
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)selectObjectPath, v25, v26, v27, v28, v29, v30);
  scriptObjectListViewMenu = (ScriptObjectListViewMenu_o *)ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !selectAssetPath )
    goto LABEL_23;
  if ( System_String__StartsWith(selectAssetPath, ScriptManager_TypeInfo->static_fields->textPath, 0)
    && System_String__op_Inequality(*v24, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    v31 = *v24;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    StartModeForAssetStorage = ScriptManager__GetStartModeForAssetStorage(selectAssetPath, v31, 0);
    *(_QWORD *)(v7 + 40) = StartModeForAssetStorage;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)(v7 + 40),
      (int32_t)StartModeForAssetStorage,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v39 = System_String__IndexOf_64476136(selectAssetPath, (System_String_o *)StringLiteral_1041/*"/"*/, 0);
    this->fields.state = 4;
    if ( (v39 & 0x80000000) == 0 )
      selectAssetPath = System_String__Substring(selectAssetPath, v39 + 1, 0);
    *(_QWORD *)(v7 + 48) = selectAssetPath;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)selectAssetPath, v40, v41, v42, v43, v44, v45);
    v46 = *(System_String_o **)(v7 + 48);
    v47 = *(System_String_o **)(v7 + 24);
    v48 = (ScriptManager_CallbackBranchList_o *)sub_1C942E4(ScriptManager_CallbackBranchList_TypeInfo);
    ScriptManager_CallbackBranchList___ctor(
      v48,
      (Il2CppObject *)v7,
      Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__,
      0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__DebugScriptLoad(v46, v47, v48, 0);
  }
}


void ScriptAssetListViewMenu__Open(
        ScriptAssetListViewMenu_o *this,
        ScriptAssetListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t state; // w8
  __int64 v10; // x1
  UnityEngine_GameObject_o *scriptTestAssetRootObject; // x0

  state = this->fields.state;
  if ( state == 6 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C9403C(
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
      sub_1C942F0(scriptTestAssetRootObject, v10);
    }
    ScriptAssetListViewManager__CreateList((ScriptAssetListViewManager_o *)scriptTestAssetRootObject, 0);
  }
  this->fields.state = 1;
  ScriptAssetListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void ScriptAssetListViewMenu__StartInput(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  ScriptAssetListViewManager_o *listViewManager; // x20
  System_Action_o *v4; // x21
  UnityEngine_Behaviour_o *scriptTestAssetCancelButton; // x0
  __int64 v6; // x1

  if ( (byte_4D29D95 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ScriptAssetListViewMenu_OnClickItem__);
    byte_4D29D95 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0);
  if ( !listViewManager
    || (ScriptAssetListViewManager__SetMode_38137400(listViewManager, 1, v4, 0),
        (scriptTestAssetCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestAssetCancelButton) == 0) )
  {
    sub_1C942F0(scriptTestAssetCancelButton, v6);
  }
  UnityEngine_Behaviour__set_enabled(scriptTestAssetCancelButton, 1, 0);
}


void ScriptAssetListViewMenu__StartMenu(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  ScriptAssetListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4D29D92 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_ScriptAssetListViewMenu__StartMenu_b__9_0__);
    sub_1C94098(&StringLiteral_12686/*"ScriptActionEncrypt"*/);
    byte_4D29D92 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_12686/*"ScriptActionEncrypt"*/, 0);
  v3 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_1C942E4(ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
  ScriptAssetListViewMenu_CallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScriptAssetListViewMenu__StartMenu_b__9_0__,
    v4);
  ScriptAssetListViewMenu__Open(this, v3, v5);
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
  __int64 v9; // x0
  bool v10; // zf
  ScriptAssetListViewMenu_o *v11; // x0
  ScriptAssetListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D29D93 & 1) == 0 )
  {
    sub_1C94098(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    byte_4D29D93 = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  ScriptAssetListViewMenu__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  ScriptAssetListViewMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D29D94 & 1) == 0 )
  {
    sub_1C94098(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    byte_4D29D94 = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  ScriptAssetListViewMenu__StartInput(v11, v12);
}


void ScriptAssetListViewMenu_CallbackFunc___ctor(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1AC582C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC57E4;
}


System_IAsyncResult_o *ScriptAssetListViewMenu_CallbackFunc__BeginInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4D29D99 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D29D99 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void ScriptAssetListViewMenu_CallbackFunc__EndInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *startMode; // x19
  System_String_o *name; // x21
  int32_t jumpLine; // w22
  System_String_o *labelPath; // x23
  Il2CppObject *v20; // x24
  ScriptManager_CallbackFunc_o *v21; // x20

  v5 = this;
  if ( (byte_4D29D9A & 1) == 0 )
  {
    sub_1C94098(&ScriptBranchMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__);
    sub_1C94098(&ScriptManager_TypeInfo);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_1C94098(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__);
    byte_4D29D9A = 1;
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
      _9__1 = (ScriptBranchMenu_CallbackFunc_o *)sub_1C942E4(ScriptBranchMenu_CallbackFunc_TypeInfo);
      ScriptBranchMenu_CallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)v5,
        Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
        v9);
      v5->fields.__9__1 = _9__1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v5->fields.__9__1, (int32_t)_9__1, v10, v11, v12, v13, v14, v15);
    }
    if ( !scriptBranchMenu )
LABEL_12:
      sub_1C942F0(this, list);
    ScriptBranchMenu__Open(scriptBranchMenu, list, _9__1, v3);
  }
  else
  {
    startMode = v5->fields.startMode;
    name = v5->fields.name;
    jumpLine = v5->fields.jumpLine;
    v20 = (Il2CppObject *)v5->fields.__4__this;
    labelPath = v5->fields.labelPath;
    v21 = (ScriptManager_CallbackFunc_o *)sub_1C942E4(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(v21, v20, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
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
  System_String_o *startMode; // x20
  System_String_o *name; // x21
  int32_t jumpLine; // w22
  System_String_o *labelPath; // x23
  Il2CppObject *v10; // x24
  ScriptManager_CallbackFunc_o *v11; // x19
  struct ScriptAssetListViewMenu_o *v12; // x21
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x19
  System_String_o *selectAssetPath; // x20
  ScriptObjectListViewMenu_CallbackFunc_o *v15; // x22
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3

  v4 = this;
  if ( (byte_4D29D9B & 1) == 0 )
  {
    sub_1C94098(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__);
    sub_1C94098(&Method_ScriptAssetListViewMenu_OnEndSelectObject__);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_1C94098(&ScriptManager_TypeInfo);
    byte_4D29D9B = 1;
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
    v12 = v4->fields.__4__this;
    if ( v12 )
    {
      v12->fields.state = 3;
      scriptObjectListViewMenu = v12->fields.scriptObjectListViewMenu;
      selectAssetPath = v12->fields.selectAssetPath;
      v15 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1C942E4(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
      ScriptObjectListViewMenu_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)v12,
        Method_ScriptAssetListViewMenu_OnEndSelectObject__,
        v16);
      if ( scriptObjectListViewMenu )
      {
        ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v15, v17);
        return;
      }
    }
LABEL_12:
    sub_1C942F0(this, b);
  }
  startMode = v4->fields.startMode;
  name = v4->fields.name;
  jumpLine = v4->fields.jumpLine;
  v10 = (Il2CppObject *)v4->fields.__4__this;
  labelPath = v4->fields.labelPath;
  v11 = (ScriptManager_CallbackFunc_o *)sub_1C942E4(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v11, v10, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v11, 0);
}