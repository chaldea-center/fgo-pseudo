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
    sub_B5D560(v8, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D69C(scriptObjectListViewMenu, v3);
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
      sub_B5D69C(scriptObjectListViewMenu, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptObjectListViewMenu, 0, 0LL);
  }
}


void __fastcall ScriptAssetListViewMenu__EndPlayScriptDebug(
        ScriptAssetListViewMenu_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  struct ScriptBranchMenu_o *scriptBranchMenu; // x20
  System_String_o *selectObjectPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v15; // x22

  if ( (byte_42ED127 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, isExit, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42ED127 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, 0.1, 0LL, 0LL),
        LODWORD(this->fields.selectAssetPath) = 3,
        scriptBranchMenu = this->fields.scriptBranchMenu,
        selectObjectPath = this->fields.selectObjectPath,
        v15 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_B5D694(ScriptObjectListViewMenu_CallbackFunc_TypeInfo),
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL),
        !scriptBranchMenu) )
  {
    sub_B5D69C(Instance, v12);
  }
  ScriptObjectListViewMenu__Open((ScriptObjectListViewMenu_o *)scriptBranchMenu, selectObjectPath, v15, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ScriptAssetListViewManager_o *scriptObjectListViewMenu; // x0
  int32_t callbackIndex; // w1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_String_o *dragParentObject; // x1
  struct ScriptBranchMenu_o *scriptBranchMenu; // x20
  System_String_o *selectObjectPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v19; // x22

  if ( (byte_42ED125 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v5, v6, v7);
    byte_42ED125 = 1;
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
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.selectObjectPath,
          (System_Int32_array **)dragParentObject,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        scriptBranchMenu = this->fields.scriptBranchMenu;
        LODWORD(this->fields.selectAssetPath) = 3;
        selectObjectPath = this->fields.selectObjectPath;
        v19 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_B5D694(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL);
        if ( scriptBranchMenu )
        {
          ScriptObjectListViewMenu__Open((ScriptObjectListViewMenu_o *)scriptBranchMenu, selectObjectPath, v19, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(scriptObjectListViewMenu, method);
  }
}


// positive sp value has been detected, the output may be wrong!
void __fastcall ScriptAssetListViewMenu__OnEndSelectObject(
        ScriptAssetListViewMenu_o *this,
        int32_t result,
        System_String_o *path,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x20
  ScriptObjectListViewMenu_o *scriptBranchMenu; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **callbackFunc; // x1
  System_String_o *selectObjectPath; // x21
  System_String_o **v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_o *v52; // x22
  System_Int32_array **StartModeForAssetStorage; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int32_t v60; // w0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_o *v67; // x21
  System_String_o *v68; // x22
  ScriptManager_CallbackBranchList_o *v69; // x23
  ScriptAssetListViewManager_o *scriptObjectListViewMenu; // x20
  System_Action_o *v71; // x21
  const MethodInfo *v72; // x3

  if ( (byte_42ED126 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)path, method);
    sub_B5D5C4(&ScriptManager_CallbackBranchList_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_ScriptAssetListViewMenu_OnClickItem__, v10, v11, v12);
    sub_B5D5C4(&ScriptManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__, v16, v17, v18);
    sub_B5D5C4(&ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1/*""*/, v25, v26, v27);
    byte_42ED126 = 1;
  }
  v28 = sub_B5D694(ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo);
  ScriptAssetListViewMenu___c__DisplayClass20_0___ctor((ScriptAssetListViewMenu___c__DisplayClass20_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_26;
  *(_QWORD *)(v28 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  if ( LODWORD(this->fields.selectAssetPath) != 3 )
    return;
  scriptBranchMenu = (ScriptObjectListViewMenu_o *)this->fields.scriptBranchMenu;
  if ( !scriptBranchMenu )
LABEL_26:
    sub_B5D69C(scriptBranchMenu, v30);
  if ( (result & 0xFFFFFFFE) != 2 )
  {
    ScriptObjectListViewMenu__Close(scriptBranchMenu, 0LL);
    LODWORD(this->fields.selectAssetPath) = 2;
    scriptObjectListViewMenu = (ScriptAssetListViewManager_o *)this->fields.scriptObjectListViewMenu;
    v71 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v71, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
    if ( scriptObjectListViewMenu )
    {
      ScriptAssetListViewManager__SetMode_34139084(scriptObjectListViewMenu, 1, v71, v72);
      scriptBranchMenu = (ScriptObjectListViewMenu_o *)this->fields.listViewManager;
      if ( scriptBranchMenu )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptBranchMenu, 1, 0LL);
        return;
      }
    }
    goto LABEL_26;
  }
  *(_DWORD *)(v28 + 32) = ScriptObjectListViewMenu__GetJumpLine(scriptBranchMenu, 0LL);
  this->fields.callbackFunc = (struct ScriptAssetListViewMenu_CallbackFunc_o *)path;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)path,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  selectObjectPath = this->fields.selectObjectPath;
  callbackFunc = (System_Int32_array **)this->fields.callbackFunc;
  v45 = (System_String_o **)(v28 + 24);
  *(_QWORD *)(v28 + 24) = callbackFunc;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 24), callbackFunc, v46, v47, v48, v49, v50, v51);
  scriptBranchMenu = (ScriptObjectListViewMenu_o *)ScriptManager_TypeInfo;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  if ( !selectObjectPath )
    goto LABEL_26;
  if ( System_String__StartsWith(selectObjectPath, ScriptManager_TypeInfo->static_fields->textPath, 0LL)
    && System_String__op_Inequality(*v45, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v52 = *v45;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    StartModeForAssetStorage = (System_Int32_array **)ScriptManager__GetStartModeForAssetStorage(
                                                        selectObjectPath,
                                                        v52,
                                                        0LL);
    *(_QWORD *)(v28 + 40) = StartModeForAssetStorage;
    sub_B5D560((BattleServantConfConponent_o *)(v28 + 40), StartModeForAssetStorage, v54, v55, v56, v57, v58, v59);
    v60 = System_String__IndexOf_44650136(selectObjectPath, (System_String_o *)StringLiteral_885/*"/"*/, 0LL);
    LODWORD(this->fields.selectAssetPath) = 4;
    if ( (v60 & 0x80000000) == 0 )
      selectObjectPath = System_String__Substring(selectObjectPath, v60 + 1, 0LL);
    *(_QWORD *)(v28 + 48) = selectObjectPath;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v28 + 48),
      (System_Int32_array **)selectObjectPath,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    v67 = *(System_String_o **)(v28 + 48);
    v68 = *(System_String_o **)(v28 + 24);
    v69 = (ScriptManager_CallbackBranchList_o *)sub_B5D694(ScriptManager_CallbackBranchList_TypeInfo);
    ScriptManager_CallbackBranchList___ctor(
      v69,
      (Il2CppObject *)v28,
      Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__,
      0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__DebugScriptLoad(v67, v68, v69, 0LL);
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
    sub_B5D560(
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
      sub_B5D69C(scriptTestAssetCancelButton, v10);
    }
    ScriptAssetListViewManager__CreateList((ScriptAssetListViewManager_o *)scriptTestAssetCancelButton, v10);
  }
  LODWORD(this->fields.selectAssetPath) = 1;
  ScriptAssetListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall ScriptAssetListViewMenu__StartInput(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ScriptAssetListViewManager_o *scriptObjectListViewMenu; // x20
  System_Action_o *v9; // x21
  UnityEngine_Behaviour_o *listViewManager; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_42ED124 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ScriptAssetListViewMenu_OnClickItem__, v5, v6, v7);
    byte_42ED124 = 1;
  }
  LODWORD(this->fields.selectAssetPath) = 2;
  scriptObjectListViewMenu = (ScriptAssetListViewManager_o *)this->fields.scriptObjectListViewMenu;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
  if ( !scriptObjectListViewMenu
    || (ScriptAssetListViewManager__SetMode_34139084(scriptObjectListViewMenu, 1, v9, v12),
        (listViewManager = (UnityEngine_Behaviour_o *)this->fields.listViewManager) == 0LL) )
  {
    sub_B5D69C(listViewManager, v11);
  }
  UnityEngine_Behaviour__set_enabled(listViewManager, 1, 0LL);
}


void __fastcall ScriptAssetListViewMenu__StartMenu(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ScriptAssetListViewMenu_CallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_42ED121 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ScriptAssetListViewMenu__StartMenu_b__9_0__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12772/*"ScriptActionEncrypt"*/, v11, v12, v13);
    byte_42ED121 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_12772/*"ScriptActionEncrypt"*/, 0LL);
  v14 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_B5D694(ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
  ScriptAssetListViewMenu_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ScriptAssetListViewMenu__StartMenu_b__9_0__,
    0LL);
  ScriptAssetListViewMenu__Open(this, v14, v15);
}


void __fastcall ScriptAssetListViewMenu__add_callbackFunc(
        ScriptAssetListViewMenu_o *this,
        ScriptAssetListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ScriptAssetListViewMenu_o *v6; // x20
  System_Delegate_o *v7; // x21
  ScriptAssetListViewMenu_c *klass; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ScriptAssetListViewMenu_o *v12; // x0
  ScriptAssetListViewMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42ED122 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ED122 = 1;
  }
  klass = this[1].klass;
  v6 = this + 1;
  v7 = (System_Delegate_o *)klass;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ScriptAssetListViewMenu_CallbackFunc_c *)v9->klass != ScriptAssetListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(v6, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ScriptAssetListViewMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall ScriptAssetListViewMenu__remove_callbackFunc(
        ScriptAssetListViewMenu_o *this,
        ScriptAssetListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ScriptAssetListViewMenu_o *v6; // x20
  System_Delegate_o *v7; // x21
  ScriptAssetListViewMenu_c *klass; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ScriptAssetListViewMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42ED123 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ED123 = 1;
  }
  klass = this[1].klass;
  v6 = this + 1;
  v7 = (System_Delegate_o *)klass;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ScriptAssetListViewMenu_CallbackFunc_c *)v9->klass != ScriptAssetListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(v6, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ScriptAssetListViewMenu__StartInput(v12, v13);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5CEF & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5CEF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ScriptAssetListViewMenu_CallbackFunc__EndInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ScriptAssetListViewMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
  __int64 v3; // x3
  ScriptAssetListViewMenu___c__DisplayClass20_0_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct ScriptAssetListViewMenu_o *_4__this; // x8
  ScriptBranchMenu_o *v19; // x21
  ScriptBranchMenu_CallbackFunc_o *_9__1; // x22
  System_String_o *startMode; // x19
  System_String_o *name; // x21
  System_String_o *labelPath; // x22
  Il2CppObject *v24; // x24
  int32_t jumpLine; // w20
  ScriptManager_CallbackFunc_o *v26; // x23

  v5 = this;
  if ( (byte_42E61C0 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, (_DWORD)list, (_DWORD)method, v3);
    sub_B5D5C4(&ScriptBranchMenu_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, v9, v10, v11);
    sub_B5D5C4(&ScriptManager_TypeInfo, v12, v13, v14);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_B5D5C4(
                                                                &Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
                                                                v15,
                                                                v16,
                                                                v17);
    byte_42E61C0 = 1;
  }
  if ( list )
  {
    _4__this = v5->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
    v19 = *(ScriptBranchMenu_o **)&_4__this->fields.state;
    _9__1 = v5->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (ScriptBranchMenu_CallbackFunc_o *)sub_B5D694(ScriptBranchMenu_CallbackFunc_TypeInfo);
      ScriptBranchMenu_CallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)v5,
        Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
        0LL);
      v5->fields.__9__1 = _9__1;
      sub_B5D560(&v5->fields.__9__1);
    }
    if ( !v19 )
LABEL_13:
      sub_B5D69C(this, list);
    ScriptBranchMenu__Open(v19, list, _9__1, 0LL);
  }
  else
  {
    startMode = v5->fields.startMode;
    name = v5->fields.name;
    v24 = (Il2CppObject *)v5->fields.__4__this;
    labelPath = v5->fields.labelPath;
    jumpLine = v5->fields.jumpLine;
    v26 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(v26, v24, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v26, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewMenu___c__DisplayClass20_0___OnEndSelectObject_b__1(
        ScriptAssetListViewMenu___c__DisplayClass20_0_o *this,
        bool b,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ScriptAssetListViewMenu___c__DisplayClass20_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct ScriptAssetListViewMenu_o *_4__this; // x8
  System_String_o *startMode; // x20
  System_String_o *name; // x21
  System_String_o *labelPath; // x22
  Il2CppObject *v22; // x24
  int32_t jumpLine; // w19
  ScriptManager_CallbackFunc_o *v24; // x23
  struct ScriptAssetListViewMenu_o *v25; // x8
  Il2CppObject *v26; // x21
  ScriptObjectListViewMenu_o *klass; // x19
  System_String_o *monitor; // x20
  ScriptObjectListViewMenu_CallbackFunc_o *v29; // x22

  v5 = this;
  if ( (byte_42E61C1 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, b, (_DWORD)method, v3);
    sub_B5D5C4(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, v9, v10, v11);
    sub_B5D5C4(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v12, v13, v14);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_B5D5C4(&ScriptManager_TypeInfo, v15, v16, v17);
    byte_42E61C1 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  this = *(ScriptAssetListViewMenu___c__DisplayClass20_0_o **)&_4__this->fields.state;
  if ( !this )
    goto LABEL_14;
  ScriptBranchMenu__Close((ScriptBranchMenu_o *)this, 0LL);
  if ( !b )
  {
    v25 = v5->fields.__4__this;
    if ( v25 )
    {
      LODWORD(v25->fields.selectAssetPath) = 3;
      v26 = (Il2CppObject *)v5->fields.__4__this;
      if ( v26 )
      {
        klass = (ScriptObjectListViewMenu_o *)v26[5].klass;
        monitor = (System_String_o *)v26[6].monitor;
        v29 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_B5D694(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
        ScriptObjectListViewMenu_CallbackFunc___ctor(v29, v26, Method_ScriptAssetListViewMenu_OnEndSelectObject__, 0LL);
        if ( klass )
        {
          ScriptObjectListViewMenu__Open(klass, monitor, v29, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B5D69C(this, b);
  }
  startMode = v5->fields.startMode;
  name = v5->fields.name;
  v22 = (Il2CppObject *)v5->fields.__4__this;
  labelPath = v5->fields.labelPath;
  jumpLine = v5->fields.jumpLine;
  v24 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v24, v22, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v24, 0LL);
}