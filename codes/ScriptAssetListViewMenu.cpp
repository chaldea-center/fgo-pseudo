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
    sub_B0D840(v8, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ScriptAssetListViewMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ScriptAssetListViewMenu__Close(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
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
    sub_B0D97C(scriptObjectListViewMenu);
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
      sub_B0D97C(scriptObjectListViewMenu);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptObjectListViewMenu, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewMenu__EndPlayScriptDebug(
        ScriptAssetListViewMenu_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  struct ScriptBranchMenu_o *scriptBranchMenu; // x20
  System_String_o *selectObjectPath; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  ScriptObjectListViewMenu_CallbackFunc_o *v11; // x22

  if ( (byte_4218C37 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, isExit);
    sub_B0D8A4(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4218C37 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, 0.1, 0LL, 0LL),
        LODWORD(this->fields.selectAssetPath) = 3,
        scriptBranchMenu = this->fields.scriptBranchMenu,
        selectObjectPath = this->fields.selectObjectPath,
        v11 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_B0D974(
                                                           ScriptObjectListViewMenu_CallbackFunc_TypeInfo,
                                                           v9,
                                                           v10),
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL),
        !scriptBranchMenu) )
  {
    sub_B0D97C(Instance);
  }
  ScriptObjectListViewMenu__Open((ScriptObjectListViewMenu_o *)scriptBranchMenu, selectObjectPath, v11, 0LL);
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
  __int64 v4; // x1
  ScriptAssetListViewManager_o *scriptObjectListViewMenu; // x0
  int32_t callbackIndex; // w1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *dragParentObject; // x1
  struct ScriptBranchMenu_o *scriptBranchMenu; // x20
  System_String_o *selectObjectPath; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  ScriptObjectListViewMenu_CallbackFunc_o *v18; // x22

  if ( (byte_4218C35 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v4);
    byte_4218C35 = 1;
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
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.selectObjectPath,
          (System_Int32_array **)dragParentObject,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        scriptBranchMenu = this->fields.scriptBranchMenu;
        LODWORD(this->fields.selectAssetPath) = 3;
        selectObjectPath = this->fields.selectObjectPath;
        v18 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_B0D974(
                                                           ScriptObjectListViewMenu_CallbackFunc_TypeInfo,
                                                           v16,
                                                           v17);
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL);
        if ( scriptBranchMenu )
        {
          ScriptObjectListViewMenu__Open((ScriptObjectListViewMenu_o *)scriptBranchMenu, selectObjectPath, v18, 0LL);
          return;
        }
      }
    }
    sub_B0D97C(scriptObjectListViewMenu);
  }
}


// local variable allocation has failed, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
void __fastcall ScriptAssetListViewMenu__OnEndSelectObject(
        ScriptAssetListViewMenu_o *this,
        int32_t result,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  ScriptObjectListViewMenu_o *scriptBranchMenu; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **callbackFunc; // x1
  System_String_o *selectObjectPath; // x21
  System_String_o **v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o *v37; // x22
  System_Int32_array **StartModeForAssetStorage; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t v45; // w0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_o *v52; // x21
  System_String_o *v53; // x22
  __int64 v54; // x1
  __int64 v55; // x2
  ScriptManager_CallbackBranchList_o *v56; // x23
  ScriptAssetListViewManager_o *scriptObjectListViewMenu; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  System_Action_o *v60; // x21
  const MethodInfo *v61; // x3

  if ( (byte_4218C36 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&ScriptManager_CallbackBranchList_TypeInfo, v7);
    sub_B0D8A4(&Method_ScriptAssetListViewMenu_OnClickItem__, v8);
    sub_B0D8A4(&ScriptManager_TypeInfo, v9);
    sub_B0D8A4(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__, v10);
    sub_B0D8A4(&ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4218C36 = 1;
  }
  v14 = sub_B0D974(ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo, *(_QWORD *)&result, path);
  ScriptAssetListViewMenu___c__DisplayClass20_0___ctor((ScriptAssetListViewMenu___c__DisplayClass20_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_26;
  *(_QWORD *)(v14 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  if ( LODWORD(this->fields.selectAssetPath) != 3 )
    return;
  scriptBranchMenu = (ScriptObjectListViewMenu_o *)this->fields.scriptBranchMenu;
  if ( !scriptBranchMenu )
LABEL_26:
    sub_B0D97C(scriptBranchMenu);
  if ( (result & 0xFFFFFFFE) != 2 )
  {
    ScriptObjectListViewMenu__Close(scriptBranchMenu, 0LL);
    LODWORD(this->fields.selectAssetPath) = 2;
    scriptObjectListViewMenu = (ScriptAssetListViewManager_o *)this->fields.scriptObjectListViewMenu;
    v60 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v58, v59);
    System_Action___ctor(v60, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
    if ( scriptObjectListViewMenu )
    {
      ScriptAssetListViewManager__SetMode_32750224(scriptObjectListViewMenu, 1, v60, v61);
      scriptBranchMenu = (ScriptObjectListViewMenu_o *)this->fields.listViewManager;
      if ( scriptBranchMenu )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptBranchMenu, 1, 0LL);
        return;
      }
    }
    goto LABEL_26;
  }
  *(_DWORD *)(v14 + 32) = ScriptObjectListViewMenu__GetJumpLine(scriptBranchMenu, 0LL);
  this->fields.callbackFunc = (struct ScriptAssetListViewMenu_CallbackFunc_o *)path;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)path,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  selectObjectPath = this->fields.selectObjectPath;
  callbackFunc = (System_Int32_array **)this->fields.callbackFunc;
  v30 = (System_String_o **)(v14 + 24);
  *(_QWORD *)(v14 + 24) = callbackFunc;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), callbackFunc, v31, v32, v33, v34, v35, v36);
  scriptBranchMenu = (ScriptObjectListViewMenu_o *)ScriptManager_TypeInfo;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  if ( !selectObjectPath )
    goto LABEL_26;
  if ( System_String__StartsWith(selectObjectPath, ScriptManager_TypeInfo->static_fields->textPath, 0LL)
    && System_String__op_Inequality(*v30, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v37 = *v30;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    StartModeForAssetStorage = (System_Int32_array **)ScriptManager__GetStartModeForAssetStorage(
                                                        selectObjectPath,
                                                        v37,
                                                        0LL);
    *(_QWORD *)(v14 + 40) = StartModeForAssetStorage;
    sub_B0D840((BattleServantConfConponent_o *)(v14 + 40), StartModeForAssetStorage, v39, v40, v41, v42, v43, v44);
    v45 = System_String__IndexOf_43922252(selectObjectPath, (System_String_o *)StringLiteral_879/*"/"*/, 0LL);
    LODWORD(this->fields.selectAssetPath) = 4;
    if ( (v45 & 0x80000000) == 0 )
      selectObjectPath = System_String__Substring(selectObjectPath, v45 + 1, 0LL);
    *(_QWORD *)(v14 + 48) = selectObjectPath;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v14 + 48),
      (System_Int32_array **)selectObjectPath,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v52 = *(System_String_o **)(v14 + 48);
    v53 = *(System_String_o **)(v14 + 24);
    v56 = (ScriptManager_CallbackBranchList_o *)sub_B0D974(ScriptManager_CallbackBranchList_TypeInfo, v54, v55);
    ScriptManager_CallbackBranchList___ctor(
      v56,
      (Il2CppObject *)v14,
      Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__,
      0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__DebugScriptLoad(v52, v53, v56, 0LL);
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
  UnityEngine_GameObject_o *scriptTestAssetCancelButton; // x0
  const MethodInfo *v11; // x1

  selectAssetPath = (int)this->fields.selectAssetPath;
  if ( selectAssetPath == 6 || !selectAssetPath )
  {
    this[1].klass = (ScriptAssetListViewMenu_c *)callback;
    sub_B0D840(
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
      sub_B0D97C(scriptTestAssetCancelButton);
    }
    ScriptAssetListViewManager__CreateList((ScriptAssetListViewManager_o *)scriptTestAssetCancelButton, v11);
  }
  LODWORD(this->fields.selectAssetPath) = 1;
  ScriptAssetListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall ScriptAssetListViewMenu__StartInput(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  ScriptAssetListViewManager_o *scriptObjectListViewMenu; // x20
  System_Action_o *v6; // x21
  UnityEngine_Behaviour_o *listViewManager; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4218C34 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ScriptAssetListViewMenu_OnClickItem__, v4);
    byte_4218C34 = 1;
  }
  LODWORD(this->fields.selectAssetPath) = 2;
  scriptObjectListViewMenu = (ScriptAssetListViewManager_o *)this->fields.scriptObjectListViewMenu;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
  if ( !scriptObjectListViewMenu
    || (ScriptAssetListViewManager__SetMode_32750224(scriptObjectListViewMenu, 1, v6, v8),
        (listViewManager = (UnityEngine_Behaviour_o *)this->fields.listViewManager) == 0LL) )
  {
    sub_B0D97C(listViewManager);
  }
  UnityEngine_Behaviour__set_enabled(listViewManager, 1, 0LL);
}


void __fastcall ScriptAssetListViewMenu__StartMenu(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  ScriptAssetListViewMenu_CallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4218C31 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&Method_ScriptAssetListViewMenu__StartMenu_b__9_0__, v4);
    sub_B0D8A4(&StringLiteral_12661/*"ScriptActionEncrypt"*/, v5);
    byte_4218C31 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_12661/*"ScriptActionEncrypt"*/, 0LL);
  v8 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_B0D974(ScriptAssetListViewMenu_CallbackFunc_TypeInfo, v6, v7);
  ScriptAssetListViewMenu_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ScriptAssetListViewMenu__StartMenu_b__9_0__,
    0LL);
  ScriptAssetListViewMenu__Open(this, v8, v9);
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

  if ( (byte_4218C32 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4218C32 = 1;
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
    v9 = sub_B022BC(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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

  if ( (byte_4218C33 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4218C33 = 1;
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
    v9 = sub_B022BC(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4212369 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, result);
    byte_4212369 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall ScriptAssetListViewMenu_CallbackFunc__EndInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewMenu_CallbackFunc__Invoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ScriptAssetListViewMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  ScriptAssetListViewMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  ScriptAssetListViewMenu_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ScriptAssetListViewMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ScriptAssetListViewMenu_o *_4__this; // x8
  ScriptBranchMenu_o *v10; // x21
  __int64 _9__1; // x22
  __int64 v12; // x9
  System_String_o *startMode; // x19
  System_String_o *name; // x21
  System_String_o *labelPath; // x22
  struct ScriptAssetListViewMenu_o *v16; // x24
  int32_t jumpLine; // w20
  __int64 v18; // x23
  __int64 v19; // x9

  v4 = this;
  if ( (byte_4212367 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptManager_CallbackFunc_TypeInfo, list);
    sub_B0D8A4(&ScriptBranchMenu_CallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, v6);
    sub_B0D8A4(&ScriptManager_TypeInfo, v7);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_B0D8A4(
                                                                &Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
                                                                v8);
    byte_4212367 = 1;
  }
  if ( list )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
    v10 = *(ScriptBranchMenu_o **)&_4__this->fields.state;
    _9__1 = (__int64)v4->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = sub_B0D974(ScriptBranchMenu_CallbackFunc_TypeInfo, list, method);
      v12 = *(_QWORD *)Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__;
      *(_QWORD *)(_9__1 + 40) = Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__;
      *(_QWORD *)(_9__1 + 16) = v12;
      *(_QWORD *)(_9__1 + 32) = v4;
      sub_B0D840(_9__1 + 32, v4);
      v4->fields.__9__1 = (struct ScriptBranchMenu_CallbackFunc_o *)_9__1;
      sub_B0D840(&v4->fields.__9__1, _9__1);
    }
    if ( !v10 )
LABEL_13:
      sub_B0D97C(this);
    ScriptBranchMenu__Open(v10, list, (ScriptBranchMenu_CallbackFunc_o *)_9__1, 0LL);
  }
  else
  {
    startMode = v4->fields.startMode;
    name = v4->fields.name;
    v16 = v4->fields.__4__this;
    labelPath = v4->fields.labelPath;
    jumpLine = v4->fields.jumpLine;
    v18 = sub_B0D974(ScriptManager_CallbackFunc_TypeInfo, list, method);
    v19 = *(_QWORD *)Method_ScriptAssetListViewMenu_EndPlayScriptDebug__;
    *(_QWORD *)(v18 + 40) = Method_ScriptAssetListViewMenu_EndPlayScriptDebug__;
    *(_QWORD *)(v18 + 16) = v19;
    *(_QWORD *)(v18 + 32) = v16;
    sub_B0D840(v18 + 32, v16);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, (ScriptManager_CallbackFunc_o *)v18, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewMenu___c__DisplayClass20_0___OnEndSelectObject_b__1(
        ScriptAssetListViewMenu___c__DisplayClass20_0_o *this,
        bool b,
        const MethodInfo *method)
{
  ScriptAssetListViewMenu___c__DisplayClass20_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ScriptAssetListViewMenu_o *_4__this; // x8
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *startMode; // x20
  System_String_o *name; // x21
  System_String_o *labelPath; // x22
  struct ScriptAssetListViewMenu_o *v15; // x24
  int32_t jumpLine; // w19
  __int64 v17; // x23
  __int64 v18; // x9
  struct ScriptAssetListViewMenu_o *v19; // x8
  Il2CppObject *v20; // x21
  ScriptObjectListViewMenu_o *klass; // x19
  System_String_o *monitor; // x20
  ScriptObjectListViewMenu_CallbackFunc_o *v23; // x22

  v4 = this;
  if ( (byte_4212368 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptManager_CallbackFunc_TypeInfo, b);
    sub_B0D8A4(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, v6);
    sub_B0D8A4(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v7);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_B0D8A4(&ScriptManager_TypeInfo, v8);
    byte_4212368 = 1;
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
    v19 = v4->fields.__4__this;
    if ( v19 )
    {
      LODWORD(v19->fields.selectAssetPath) = 3;
      v20 = (Il2CppObject *)v4->fields.__4__this;
      if ( v20 )
      {
        klass = (ScriptObjectListViewMenu_o *)v20[5].klass;
        monitor = (System_String_o *)v20[6].monitor;
        v23 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_B0D974(
                                                           ScriptObjectListViewMenu_CallbackFunc_TypeInfo,
                                                           v10,
                                                           v11);
        ScriptObjectListViewMenu_CallbackFunc___ctor(v23, v20, Method_ScriptAssetListViewMenu_OnEndSelectObject__, 0LL);
        if ( klass )
        {
          ScriptObjectListViewMenu__Open(klass, monitor, v23, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B0D97C(this);
  }
  startMode = v4->fields.startMode;
  name = v4->fields.name;
  v15 = v4->fields.__4__this;
  labelPath = v4->fields.labelPath;
  jumpLine = v4->fields.jumpLine;
  v17 = sub_B0D974(ScriptManager_CallbackFunc_TypeInfo, v10, v11);
  v18 = *(_QWORD *)Method_ScriptAssetListViewMenu_EndPlayScriptDebug__;
  *(_QWORD *)(v17 + 40) = Method_ScriptAssetListViewMenu_EndPlayScriptDebug__;
  *(_QWORD *)(v17 + 16) = v18;
  *(_QWORD *)(v17 + 32) = v15;
  sub_B0D840(v17 + 32, v15);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, (ScriptManager_CallbackFunc_o *)v17, 0LL);
}