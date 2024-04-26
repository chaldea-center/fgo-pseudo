void __fastcall ScriptAssetListViewMenu___ctor(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
}


void __fastcall ScriptAssetListViewMenu__Callback(
        ScriptAssetListViewMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *v8; // x0
  ScriptAssetListViewMenu_CallbackFunc_o *v9; // x19
  ScriptAssetListViewMenu_c *klass; // t1

  klass = this[1].klass;
  v8 = (BattleServantConfConponent_o *)&this[1];
  v9 = (ScriptAssetListViewMenu_CallbackFunc_o *)klass;
  if ( klass )
  {
    v8->klass = 0LL;
    sub_B70630(v8, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ScriptAssetListViewMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ScriptAssetListViewMenu__Close(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *scriptObjectListViewMenu; // x0

  ScriptAssetListViewMenu__EndInput(this, method);
  if ( LODWORD(this->fields.selectAssetPath) )
  {
    scriptObjectListViewMenu = (ListViewManager_o *)this->fields.scriptObjectListViewMenu;
    if ( !scriptObjectListViewMenu )
      goto LABEL_6;
    ListViewManager__DestroyList(scriptObjectListViewMenu, 0LL);
    LODWORD(this->fields.selectAssetPath) = 0;
  }
  scriptObjectListViewMenu = (ListViewManager_o *)this->fields.scriptTestAssetCancelButton;
  if ( !scriptObjectListViewMenu )
LABEL_6:
    sub_B7076C(scriptObjectListViewMenu, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scriptObjectListViewMenu, 0, 0LL);
}


void __fastcall ScriptAssetListViewMenu__EndInput(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *scriptObjectListViewMenu; // x0

  if ( LODWORD(this->fields.selectAssetPath) )
  {
    scriptObjectListViewMenu = (ListViewManager_o *)this->fields.scriptObjectListViewMenu;
    if ( !scriptObjectListViewMenu
      || (ListViewManager__set_IsInput(scriptObjectListViewMenu, 0, 0LL),
          (scriptObjectListViewMenu = (ListViewManager_o *)this->fields.listViewManager) == 0LL) )
    {
      sub_B7076C(scriptObjectListViewMenu, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptObjectListViewMenu, 0, 0LL);
  }
}


void __fastcall ScriptAssetListViewMenu__EndPlayScriptDebug(
        ScriptAssetListViewMenu_o *this,
        bool isExit,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  struct ScriptBranchMenu_o *scriptBranchMenu; // x20
  System_String_o *selectObjectPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v8; // x22

  if ( (byte_4356546 & 1) == 0 )
  {
    sub_B70694(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ScriptAssetListViewMenu_OnEndSelectObject__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4356546 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, 0.1, 0LL, 0LL),
        LODWORD(this->fields.selectAssetPath) = 3,
        scriptBranchMenu = this->fields.scriptBranchMenu,
        selectObjectPath = this->fields.selectObjectPath,
        v8 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_B70764(ScriptObjectListViewMenu_CallbackFunc_TypeInfo),
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL),
        !scriptBranchMenu) )
  {
    sub_B7076C(Instance, v5);
  }
  ScriptObjectListViewMenu__Open((ScriptObjectListViewMenu_o *)scriptBranchMenu, selectObjectPath, v8, 0LL);
}


void __fastcall ScriptAssetListViewMenu__OnClickCancel(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( LODWORD(this->fields.selectAssetPath) == 2 )
  {
    ScriptAssetListViewMenu__EndInput(this, method);
    LODWORD(this->fields.selectAssetPath) = 5;
    ScriptAssetListViewMenu__Callback(this, 0, v3);
  }
}


void __fastcall ScriptAssetListViewMenu__OnClickItem(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ScriptAssetListViewManager_o *scriptObjectListViewMenu; // x0
  int32_t callbackIndex; // w1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_o *dragParentObject; // x1
  struct ScriptBranchMenu_o *scriptBranchMenu; // x20
  System_String_o *selectObjectPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v15; // x22

  if ( (byte_4356544 & 1) == 0 )
  {
    sub_B70694(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ScriptAssetListViewMenu_OnEndSelectObject__);
    byte_4356544 = 1;
  }
  if ( LODWORD(this->fields.selectAssetPath) == 2 )
  {
    scriptObjectListViewMenu = (ScriptAssetListViewManager_o *)this->fields.scriptObjectListViewMenu;
    if ( scriptObjectListViewMenu )
    {
      callbackIndex = scriptObjectListViewMenu->fields.callbackIndex;
      if ( callbackIndex < 0 )
        return;
      scriptObjectListViewMenu = (ScriptAssetListViewManager_o *)ScriptAssetListViewManager__GetItem(
                                                                   scriptObjectListViewMenu,
                                                                   callbackIndex,
                                                                   v2);
      if ( scriptObjectListViewMenu )
      {
        dragParentObject = (struct System_String_o *)scriptObjectListViewMenu->fields.dragParentObject;
        this->fields.selectObjectPath = dragParentObject;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.selectObjectPath,
          (System_Int32_array **)dragParentObject,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        scriptBranchMenu = this->fields.scriptBranchMenu;
        LODWORD(this->fields.selectAssetPath) = 3;
        selectObjectPath = this->fields.selectObjectPath;
        v15 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_B70764(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL);
        if ( scriptBranchMenu )
        {
          ScriptObjectListViewMenu__Open((ScriptObjectListViewMenu_o *)scriptBranchMenu, selectObjectPath, v15, 0LL);
          return;
        }
      }
    }
    sub_B7076C(scriptObjectListViewMenu, method);
  }
}


// positive sp value has been detected, the output may be wrong!
void __fastcall ScriptAssetListViewMenu__OnEndSelectObject(
        ScriptAssetListViewMenu_o *this,
        int32_t result,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ScriptObjectListViewMenu_o *scriptBranchMenu; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **callbackFunc; // x1
  System_String_o *selectObjectPath; // x21
  System_String_o **v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *v31; // x22
  System_Int32_array **StartModeForAssetStorage; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t v39; // w0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_o *v46; // x21
  System_String_o *v47; // x22
  ScriptManager_CallbackBranchList_o *v48; // x23
  ScriptAssetListViewManager_o *scriptObjectListViewMenu; // x20
  System_Action_o *v50; // x21
  const MethodInfo *v51; // x3

  if ( (byte_4356545 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ScriptManager_CallbackBranchList_TypeInfo);
    sub_B70694(&Method_ScriptAssetListViewMenu_OnClickItem__);
    sub_B70694(&ScriptManager_TypeInfo);
    sub_B70694(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__);
    sub_B70694(&ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4356545 = 1;
  }
  v7 = sub_B70764(ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo);
  ScriptAssetListViewMenu___c__DisplayClass20_0___ctor((ScriptAssetListViewMenu___c__DisplayClass20_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  if ( LODWORD(this->fields.selectAssetPath) != 3 )
    return;
  scriptBranchMenu = (ScriptObjectListViewMenu_o *)this->fields.scriptBranchMenu;
  if ( !scriptBranchMenu )
LABEL_26:
    sub_B7076C(scriptBranchMenu, v9);
  if ( (result & 0xFFFFFFFE) != 2 )
  {
    ScriptObjectListViewMenu__Close(scriptBranchMenu, 0LL);
    LODWORD(this->fields.selectAssetPath) = 2;
    scriptObjectListViewMenu = (ScriptAssetListViewManager_o *)this->fields.scriptObjectListViewMenu;
    v50 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v50, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
    if ( scriptObjectListViewMenu )
    {
      ScriptAssetListViewManager__SetMode_34090212(scriptObjectListViewMenu, 1, v50, v51);
      scriptBranchMenu = (ScriptObjectListViewMenu_o *)this->fields.listViewManager;
      if ( scriptBranchMenu )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptBranchMenu, 1, 0LL);
        return;
      }
    }
    goto LABEL_26;
  }
  *(_DWORD *)(v7 + 32) = ScriptObjectListViewMenu__GetJumpLine(scriptBranchMenu, 0LL);
  this->fields.callbackFunc = (struct ScriptAssetListViewMenu_CallbackFunc_o *)path;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)path,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  selectObjectPath = this->fields.selectObjectPath;
  callbackFunc = (System_Int32_array **)this->fields.callbackFunc;
  v24 = (System_String_o **)(v7 + 24);
  *(_QWORD *)(v7 + 24) = callbackFunc;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), callbackFunc, v25, v26, v27, v28, v29, v30);
  scriptBranchMenu = (ScriptObjectListViewMenu_o *)ScriptManager_TypeInfo;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  if ( !selectObjectPath )
    goto LABEL_26;
  if ( System_String__StartsWith(selectObjectPath, ScriptManager_TypeInfo->static_fields->textPath, 0LL)
    && System_String__op_Inequality(*v24, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v31 = *v24;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    StartModeForAssetStorage = (System_Int32_array **)ScriptManager__GetStartModeForAssetStorage(
                                                        selectObjectPath,
                                                        v31,
                                                        0LL);
    *(_QWORD *)(v7 + 40) = StartModeForAssetStorage;
    sub_B70630((BattleServantConfConponent_o *)(v7 + 40), StartModeForAssetStorage, v33, v34, v35, v36, v37, v38);
    v39 = System_String__IndexOf_44830516(selectObjectPath, (System_String_o *)StringLiteral_890/*"/"*/, 0LL);
    LODWORD(this->fields.selectAssetPath) = 4;
    if ( (v39 & 0x80000000) == 0 )
      selectObjectPath = System_String__Substring(selectObjectPath, v39 + 1, 0LL);
    *(_QWORD *)(v7 + 48) = selectObjectPath;
    sub_B70630(
      (BattleServantConfConponent_o *)(v7 + 48),
      (System_Int32_array **)selectObjectPath,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    v46 = *(System_String_o **)(v7 + 48);
    v47 = *(System_String_o **)(v7 + 24);
    v48 = (ScriptManager_CallbackBranchList_o *)sub_B70764(ScriptManager_CallbackBranchList_TypeInfo);
    ScriptManager_CallbackBranchList___ctor(
      v48,
      (Il2CppObject *)v7,
      Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__,
      0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__DebugScriptLoad(v46, v47, v48, 0LL);
  }
}


void __fastcall ScriptAssetListViewMenu__Open(
        ScriptAssetListViewMenu_o *this,
        ScriptAssetListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int selectAssetPath; // w8
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *scriptTestAssetCancelButton; // x0

  selectAssetPath = (int)this->fields.selectAssetPath;
  if ( selectAssetPath == 6 || !selectAssetPath )
  {
    this[1].klass = (ScriptAssetListViewMenu_c *)callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this[1],
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    scriptTestAssetCancelButton = (UnityEngine_GameObject_o *)this->fields.scriptTestAssetCancelButton;
    if ( !scriptTestAssetCancelButton
      || (UnityEngine_GameObject__SetActive(scriptTestAssetCancelButton, 1, 0LL),
          (scriptTestAssetCancelButton = (UnityEngine_GameObject_o *)this->fields.scriptObjectListViewMenu) == 0LL)
      || (ListViewManager__set_IsInput((ListViewManager_o *)scriptTestAssetCancelButton, 0, 0LL),
          (scriptTestAssetCancelButton = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestAssetCancelButton, 0, 0LL),
          (scriptTestAssetCancelButton = (UnityEngine_GameObject_o *)this->fields.scriptObjectListViewMenu) == 0LL) )
    {
      sub_B7076C(scriptTestAssetCancelButton, v10);
    }
    ScriptAssetListViewManager__CreateList((ScriptAssetListViewManager_o *)scriptTestAssetCancelButton, v10);
  }
  LODWORD(this->fields.selectAssetPath) = 1;
  ScriptAssetListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall ScriptAssetListViewMenu__StartInput(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  ScriptAssetListViewManager_o *scriptObjectListViewMenu; // x20
  System_Action_o *v4; // x21
  UnityEngine_Behaviour_o *listViewManager; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4356543 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ScriptAssetListViewMenu_OnClickItem__);
    byte_4356543 = 1;
  }
  LODWORD(this->fields.selectAssetPath) = 2;
  scriptObjectListViewMenu = (ScriptAssetListViewManager_o *)this->fields.scriptObjectListViewMenu;
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
  if ( !scriptObjectListViewMenu
    || (ScriptAssetListViewManager__SetMode_34090212(scriptObjectListViewMenu, 1, v4, v7),
        (listViewManager = (UnityEngine_Behaviour_o *)this->fields.listViewManager) == 0LL) )
  {
    sub_B7076C(listViewManager, v6);
  }
  UnityEngine_Behaviour__set_enabled(listViewManager, 1, 0LL);
}


void __fastcall ScriptAssetListViewMenu__StartMenu(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  ScriptAssetListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4356540 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ScriptAssetListViewMenu__StartMenu_b__9_0__);
    sub_B70694(&StringLiteral_12793/*"ScriptActionEncrypt"*/);
    byte_4356540 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_12793/*"ScriptActionEncrypt"*/, 0LL);
  v3 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_B70764(ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
  ScriptAssetListViewMenu_CallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScriptAssetListViewMenu__StartMenu_b__9_0__,
    0LL);
  ScriptAssetListViewMenu__Open(this, v3, v4);
}


void __fastcall ScriptAssetListViewMenu__add_callbackFunc(
        ScriptAssetListViewMenu_o *this,
        ScriptAssetListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  ScriptAssetListViewMenu_o *v5; // x20
  System_Delegate_o *v6; // x21
  ScriptAssetListViewMenu_c *klass; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptAssetListViewMenu_o *v11; // x0
  ScriptAssetListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4356541 & 1) == 0 )
  {
    sub_B70694(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    byte_4356541 = 1;
  }
  klass = this[1].klass;
  v5 = this + 1;
  v6 = (System_Delegate_o *)klass;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptAssetListViewMenu_CallbackFunc_c *)v8->klass != ScriptAssetListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B650AC(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ScriptAssetListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptAssetListViewMenu__remove_callbackFunc(
        ScriptAssetListViewMenu_o *this,
        ScriptAssetListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  ScriptAssetListViewMenu_o *v5; // x20
  System_Delegate_o *v6; // x21
  ScriptAssetListViewMenu_c *klass; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptAssetListViewMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4356542 & 1) == 0 )
  {
    sub_B70694(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    byte_4356542 = 1;
  }
  klass = this[1].klass;
  v5 = this + 1;
  v6 = (System_Delegate_o *)klass;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptAssetListViewMenu_CallbackFunc_c *)v8->klass != ScriptAssetListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B650AC(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ScriptAssetListViewMenu__StartInput(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewMenu_CallbackFunc___ctor(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall ScriptAssetListViewMenu_CallbackFunc__BeginInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_434F1CE & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_434F1CE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall ScriptAssetListViewMenu_CallbackFunc__EndInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewMenu_CallbackFunc__Invoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ScriptAssetListViewMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  ScriptAssetListViewMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ScriptAssetListViewMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ScriptAssetListViewMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B706C4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B70744(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B08590(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}


void __fastcall ScriptAssetListViewMenu___c__DisplayClass20_0___ctor(
        ScriptAssetListViewMenu___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScriptAssetListViewMenu___c__DisplayClass20_0___OnEndSelectObject_b__0(
        ScriptAssetListViewMenu___c__DisplayClass20_0_o *this,
        System_Collections_Generic_List_List_string___o *list,
        const MethodInfo *method)
{
  ScriptAssetListViewMenu___c__DisplayClass20_0_o *v4; // x20
  struct ScriptAssetListViewMenu_o *_4__this; // x8
  ScriptBranchMenu_o *v6; // x21
  __int64 _9__1; // x22
  __int64 v8; // x9
  System_String_o *startMode; // x19
  System_String_o *name; // x21
  System_String_o *labelPath; // x22
  struct ScriptAssetListViewMenu_o *v12; // x24
  int32_t jumpLine; // w20
  __int64 v14; // x23
  __int64 v15; // x9

  v4 = this;
  if ( (byte_434F1CC & 1) == 0 )
  {
    sub_B70694(&ScriptManager_CallbackFunc_TypeInfo);
    sub_B70694(&ScriptBranchMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__);
    sub_B70694(&ScriptManager_TypeInfo);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_B70694(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__);
    byte_434F1CC = 1;
  }
  if ( list )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
    v6 = *(ScriptBranchMenu_o **)&_4__this->fields.state;
    _9__1 = (__int64)v4->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = sub_B70764(ScriptBranchMenu_CallbackFunc_TypeInfo);
      v8 = *(_QWORD *)Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__;
      *(_QWORD *)(_9__1 + 40) = Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__;
      *(_QWORD *)(_9__1 + 16) = v8;
      *(_QWORD *)(_9__1 + 32) = v4;
      sub_B70630(_9__1 + 32);
      v4->fields.__9__1 = (struct ScriptBranchMenu_CallbackFunc_o *)_9__1;
      sub_B70630(&v4->fields.__9__1);
    }
    if ( !v6 )
LABEL_13:
      sub_B7076C(this, list);
    ScriptBranchMenu__Open(v6, list, (ScriptBranchMenu_CallbackFunc_o *)_9__1, 0LL);
  }
  else
  {
    startMode = v4->fields.startMode;
    name = v4->fields.name;
    v12 = v4->fields.__4__this;
    labelPath = v4->fields.labelPath;
    jumpLine = v4->fields.jumpLine;
    v14 = sub_B70764(ScriptManager_CallbackFunc_TypeInfo);
    v15 = *(_QWORD *)Method_ScriptAssetListViewMenu_EndPlayScriptDebug__;
    *(_QWORD *)(v14 + 40) = Method_ScriptAssetListViewMenu_EndPlayScriptDebug__;
    *(_QWORD *)(v14 + 16) = v15;
    *(_QWORD *)(v14 + 32) = v12;
    sub_B70630(v14 + 32);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, (ScriptManager_CallbackFunc_o *)v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewMenu___c__DisplayClass20_0___OnEndSelectObject_b__1(
        ScriptAssetListViewMenu___c__DisplayClass20_0_o *this,
        bool b,
        const MethodInfo *method)
{
  ScriptAssetListViewMenu___c__DisplayClass20_0_o *v4; // x19
  struct ScriptAssetListViewMenu_o *_4__this; // x8
  System_String_o *startMode; // x20
  System_String_o *name; // x21
  System_String_o *labelPath; // x22
  struct ScriptAssetListViewMenu_o *v9; // x24
  int32_t jumpLine; // w19
  __int64 v11; // x23
  __int64 v12; // x9
  struct ScriptAssetListViewMenu_o *v13; // x8
  struct ScriptAssetListViewMenu_o *v14; // x21
  ScriptObjectListViewMenu_o *scriptBranchMenu; // x19
  System_String_o *selectObjectPath; // x20
  __int64 v17; // x22
  __int64 v18; // x9

  v4 = this;
  if ( (byte_434F1CD & 1) == 0 )
  {
    sub_B70694(&ScriptManager_CallbackFunc_TypeInfo);
    sub_B70694(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__);
    sub_B70694(&Method_ScriptAssetListViewMenu_OnEndSelectObject__);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_B70694(&ScriptManager_TypeInfo);
    byte_434F1CD = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  this = *(ScriptAssetListViewMenu___c__DisplayClass20_0_o **)&_4__this->fields.state;
  if ( !this )
    goto LABEL_14;
  ScriptBranchMenu__Close((ScriptBranchMenu_o *)this, 0LL);
  if ( !b )
  {
    v13 = v4->fields.__4__this;
    if ( v13 )
    {
      LODWORD(v13->fields.selectAssetPath) = 3;
      v14 = v4->fields.__4__this;
      if ( v14 )
      {
        scriptBranchMenu = (ScriptObjectListViewMenu_o *)v14->fields.scriptBranchMenu;
        selectObjectPath = v14->fields.selectObjectPath;
        v17 = sub_B70764(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
        v18 = *(_QWORD *)Method_ScriptAssetListViewMenu_OnEndSelectObject__;
        *(_QWORD *)(v17 + 40) = Method_ScriptAssetListViewMenu_OnEndSelectObject__;
        *(_QWORD *)(v17 + 16) = v18;
        *(_QWORD *)(v17 + 32) = v14;
        sub_B70630(v17 + 32);
        if ( scriptBranchMenu )
        {
          ScriptObjectListViewMenu__Open(
            scriptBranchMenu,
            selectObjectPath,
            (ScriptObjectListViewMenu_CallbackFunc_o *)v17,
            0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B7076C(this, b);
  }
  startMode = v4->fields.startMode;
  name = v4->fields.name;
  v9 = v4->fields.__4__this;
  labelPath = v4->fields.labelPath;
  jumpLine = v4->fields.jumpLine;
  v11 = sub_B70764(ScriptManager_CallbackFunc_TypeInfo);
  v12 = *(_QWORD *)Method_ScriptAssetListViewMenu_EndPlayScriptDebug__;
  *(_QWORD *)(v11 + 40) = Method_ScriptAssetListViewMenu_EndPlayScriptDebug__;
  *(_QWORD *)(v11 + 16) = v12;
  *(_QWORD *)(v11 + 32) = v9;
  sub_B70630(v11 + 32);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, (ScriptManager_CallbackFunc_o *)v11, 0LL);
}