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
    sub_B2C2F8(v8, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C434(scriptObjectListViewMenu, v3);
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
      sub_B2C434(scriptObjectListViewMenu, method);
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
  __int64 v7; // x1
  struct ScriptBranchMenu_o *scriptBranchMenu; // x20
  System_String_o *selectObjectPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v10; // x22

  if ( (byte_418BE14 & 1) == 0 )
  {
    sub_B2C35C(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, isExit);
    sub_B2C35C(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_418BE14 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, 0.1, 0LL, 0LL),
        LODWORD(this->fields.selectAssetPath) = 3,
        scriptBranchMenu = this->fields.scriptBranchMenu,
        selectObjectPath = this->fields.selectObjectPath,
        v10 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_B2C42C(ScriptObjectListViewMenu_CallbackFunc_TypeInfo),
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL),
        !scriptBranchMenu) )
  {
    sub_B2C434(Instance, v7);
  }
  ScriptObjectListViewMenu__Open((ScriptObjectListViewMenu_o *)scriptBranchMenu, selectObjectPath, v10, 0LL);
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
  ScriptObjectListViewMenu_CallbackFunc_o *v16; // x22

  if ( (byte_418BE12 & 1) == 0 )
  {
    sub_B2C35C(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v4);
    byte_418BE12 = 1;
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
        sub_B2C2F8(
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
        v16 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_B2C42C(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          (intptr_t)Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL);
        if ( scriptBranchMenu )
        {
          ScriptObjectListViewMenu__Open((ScriptObjectListViewMenu_o *)scriptBranchMenu, selectObjectPath, v16, 0LL);
          return;
        }
      }
    }
    sub_B2C434(scriptObjectListViewMenu, method);
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
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **callbackFunc; // x1
  System_String_o *selectObjectPath; // x21
  System_String_o **v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_o *v38; // x22
  System_Int32_array **StartModeForAssetStorage; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t v46; // w0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_o *v53; // x21
  System_String_o *v54; // x22
  ScriptManager_CallbackBranchList_o *v55; // x23
  ScriptAssetListViewManager_o *scriptObjectListViewMenu; // x20
  System_Action_o *v57; // x21
  const MethodInfo *v58; // x3

  if ( (byte_418BE13 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&ScriptManager_CallbackBranchList_TypeInfo, v7);
    sub_B2C35C(&Method_ScriptAssetListViewMenu_OnClickItem__, v8);
    sub_B2C35C(&ScriptManager_TypeInfo, v9);
    sub_B2C35C(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__, v10);
    sub_B2C35C(&ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_418BE13 = 1;
  }
  v14 = sub_B2C42C(ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo);
  ScriptAssetListViewMenu___c__DisplayClass20_0___ctor((ScriptAssetListViewMenu___c__DisplayClass20_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_26;
  *(_QWORD *)(v14 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  if ( LODWORD(this->fields.selectAssetPath) != 3 )
    return;
  scriptBranchMenu = (ScriptObjectListViewMenu_o *)this->fields.scriptBranchMenu;
  if ( !scriptBranchMenu )
LABEL_26:
    sub_B2C434(scriptBranchMenu, v16);
  if ( (result & 0xFFFFFFFE) != 2 )
  {
    ScriptObjectListViewMenu__Close(scriptBranchMenu, 0LL);
    LODWORD(this->fields.selectAssetPath) = 2;
    scriptObjectListViewMenu = (ScriptAssetListViewManager_o *)this->fields.scriptObjectListViewMenu;
    v57 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v57, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
    if ( scriptObjectListViewMenu )
    {
      ScriptAssetListViewManager__SetMode_33225356(scriptObjectListViewMenu, 1, v57, v58);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)path,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  selectObjectPath = this->fields.selectObjectPath;
  callbackFunc = (System_Int32_array **)this->fields.callbackFunc;
  v31 = (System_String_o **)(v14 + 24);
  *(_QWORD *)(v14 + 24) = callbackFunc;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 24), callbackFunc, v32, v33, v34, v35, v36, v37);
  scriptBranchMenu = (ScriptObjectListViewMenu_o *)ScriptManager_TypeInfo;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  if ( !selectObjectPath )
    goto LABEL_26;
  if ( System_String__StartsWith(selectObjectPath, ScriptManager_TypeInfo->static_fields->textPath, 0LL)
    && System_String__op_Inequality(*v31, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v38 = *v31;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    StartModeForAssetStorage = (System_Int32_array **)ScriptManager__GetStartModeForAssetStorage(
                                                        selectObjectPath,
                                                        v38,
                                                        0LL);
    *(_QWORD *)(v14 + 40) = StartModeForAssetStorage;
    sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 40), StartModeForAssetStorage, v40, v41, v42, v43, v44, v45);
    v46 = System_String__IndexOf_44377880(selectObjectPath, (System_String_o *)StringLiteral_872/*"/"*/, 0LL);
    LODWORD(this->fields.selectAssetPath) = 4;
    if ( (v46 & 0x80000000) == 0 )
      selectObjectPath = System_String__Substring(selectObjectPath, v46 + 1, 0LL);
    *(_QWORD *)(v14 + 48) = selectObjectPath;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v14 + 48),
      (System_Int32_array **)selectObjectPath,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    v53 = *(System_String_o **)(v14 + 48);
    v54 = *(System_String_o **)(v14 + 24);
    v55 = (ScriptManager_CallbackBranchList_o *)sub_B2C42C(ScriptManager_CallbackBranchList_TypeInfo);
    ScriptManager_CallbackBranchList___ctor(
      v55,
      (Il2CppObject *)v14,
      Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__,
      0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__DebugScriptLoad(v53, v54, v55, 0LL);
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
    sub_B2C2F8(
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
      sub_B2C434(scriptTestAssetCancelButton, v10);
    }
    ScriptAssetListViewManager__CreateList((ScriptAssetListViewManager_o *)scriptTestAssetCancelButton, v10);
  }
  LODWORD(this->fields.selectAssetPath) = 1;
  ScriptAssetListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall ScriptAssetListViewMenu__StartInput(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ScriptAssetListViewManager_o *scriptObjectListViewMenu; // x20
  System_Action_o *v5; // x21
  UnityEngine_Behaviour_o *listViewManager; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_418BE11 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ScriptAssetListViewMenu_OnClickItem__, v3);
    byte_418BE11 = 1;
  }
  LODWORD(this->fields.selectAssetPath) = 2;
  scriptObjectListViewMenu = (ScriptAssetListViewManager_o *)this->fields.scriptObjectListViewMenu;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
  if ( !scriptObjectListViewMenu
    || (ScriptAssetListViewManager__SetMode_33225356(scriptObjectListViewMenu, 1, v5, v8),
        (listViewManager = (UnityEngine_Behaviour_o *)this->fields.listViewManager) == 0LL) )
  {
    sub_B2C434(listViewManager, v7);
  }
  UnityEngine_Behaviour__set_enabled(listViewManager, 1, 0LL);
}


void __fastcall ScriptAssetListViewMenu__StartMenu(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ScriptAssetListViewMenu_CallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_418BE0E & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_ScriptAssetListViewMenu__StartMenu_b__9_0__, v4);
    sub_B2C35C(&StringLiteral_12623/*"ScriptActionEncrypt"*/, v5);
    byte_418BE0E = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_12623/*"ScriptActionEncrypt"*/, 0LL);
  v6 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_B2C42C(ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
  ScriptAssetListViewMenu_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ScriptAssetListViewMenu__StartMenu_b__9_0__,
    0LL);
  ScriptAssetListViewMenu__Open(this, v6, v7);
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

  if ( (byte_418BE0F & 1) == 0 )
  {
    sub_B2C35C(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, value);
    byte_418BE0F = 1;
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
    v9 = sub_B20D74(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418BE10 & 1) == 0 )
  {
    sub_B2C35C(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, value);
    byte_418BE10 = 1;
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
    v9 = sub_B20D74(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_418551D & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_418551D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ScriptAssetListViewMenu_CallbackFunc__EndInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  ScriptAssetListViewMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ScriptAssetListViewMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
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
  if ( (byte_418551B & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, list);
    sub_B2C35C(&ScriptBranchMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, v6);
    sub_B2C35C(&ScriptManager_TypeInfo, v7);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_B2C35C(
                                                                &Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
                                                                v8);
    byte_418551B = 1;
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
      _9__1 = sub_B2C42C(ScriptBranchMenu_CallbackFunc_TypeInfo);
      v12 = *(_QWORD *)Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__;
      *(_QWORD *)(_9__1 + 40) = Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__;
      *(_QWORD *)(_9__1 + 16) = v12;
      *(_QWORD *)(_9__1 + 32) = v4;
      sub_B2C2F8(_9__1 + 32, v4);
      v4->fields.__9__1 = (struct ScriptBranchMenu_CallbackFunc_o *)_9__1;
      sub_B2C2F8(&v4->fields.__9__1, _9__1);
    }
    if ( !v10 )
LABEL_13:
      sub_B2C434(this, list);
    ScriptBranchMenu__Open(v10, list, (ScriptBranchMenu_CallbackFunc_o *)_9__1, 0LL);
  }
  else
  {
    startMode = v4->fields.startMode;
    name = v4->fields.name;
    v16 = v4->fields.__4__this;
    labelPath = v4->fields.labelPath;
    jumpLine = v4->fields.jumpLine;
    v18 = sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
    v19 = *(_QWORD *)Method_ScriptAssetListViewMenu_EndPlayScriptDebug__;
    *(_QWORD *)(v18 + 40) = Method_ScriptAssetListViewMenu_EndPlayScriptDebug__;
    *(_QWORD *)(v18 + 16) = v19;
    *(_QWORD *)(v18 + 32) = v16;
    sub_B2C2F8(v18 + 32, v16);
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
  System_String_o *startMode; // x20
  System_String_o *name; // x21
  System_String_o *labelPath; // x22
  struct ScriptAssetListViewMenu_o *v13; // x24
  int32_t jumpLine; // w19
  __int64 v15; // x23
  __int64 v16; // x9
  struct ScriptAssetListViewMenu_o *v17; // x8
  struct ScriptAssetListViewMenu_o *v18; // x21
  ScriptObjectListViewMenu_o *scriptBranchMenu; // x19
  System_String_o *selectObjectPath; // x20
  __int64 v21; // x22
  __int64 v22; // x9

  v4 = this;
  if ( (byte_418551C & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, b);
    sub_B2C35C(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, v6);
    sub_B2C35C(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v7);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_B2C35C(&ScriptManager_TypeInfo, v8);
    byte_418551C = 1;
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
    v17 = v4->fields.__4__this;
    if ( v17 )
    {
      LODWORD(v17->fields.selectAssetPath) = 3;
      v18 = v4->fields.__4__this;
      if ( v18 )
      {
        scriptBranchMenu = (ScriptObjectListViewMenu_o *)v18->fields.scriptBranchMenu;
        selectObjectPath = v18->fields.selectObjectPath;
        v21 = sub_B2C42C(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
        v22 = *(_QWORD *)Method_ScriptAssetListViewMenu_OnEndSelectObject__;
        *(_QWORD *)(v21 + 40) = Method_ScriptAssetListViewMenu_OnEndSelectObject__;
        *(_QWORD *)(v21 + 16) = v22;
        *(_QWORD *)(v21 + 32) = v18;
        sub_B2C2F8(v21 + 32, v18);
        if ( scriptBranchMenu )
        {
          ScriptObjectListViewMenu__Open(
            scriptBranchMenu,
            selectObjectPath,
            (ScriptObjectListViewMenu_CallbackFunc_o *)v21,
            0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B2C434(this, b);
  }
  startMode = v4->fields.startMode;
  name = v4->fields.name;
  v13 = v4->fields.__4__this;
  labelPath = v4->fields.labelPath;
  jumpLine = v4->fields.jumpLine;
  v15 = sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
  v16 = *(_QWORD *)Method_ScriptAssetListViewMenu_EndPlayScriptDebug__;
  *(_QWORD *)(v15 + 40) = Method_ScriptAssetListViewMenu_EndPlayScriptDebug__;
  *(_QWORD *)(v15 + 16) = v16;
  *(_QWORD *)(v15 + 32) = v13;
  sub_B2C2F8(v15 + 32, v13);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, (ScriptManager_CallbackFunc_o *)v15, 0LL);
}