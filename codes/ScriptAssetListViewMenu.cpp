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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ScriptAssetListViewMenu_CallbackFunc_o *v9; // x20
  struct ScriptAssetListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BE4A70(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ScriptAssetListViewMenu__Close(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0

  ScriptAssetListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0LL);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.scriptTestAssetRootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1BE4D28(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0LL);
}


void __fastcall ScriptAssetListViewMenu__EndInput(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0LL),
          (listViewManager = (ListViewManager_o *)this->fields.scriptTestAssetCancelButton) == 0LL) )
    {
      sub_1BE4D28(listViewManager, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x20
  System_String_o *selectAssetPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v10; // x22

  if ( (byte_4B642CB & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, isExit);
    sub_1BE4ACC(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B642CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein((CommonUI_o *)Instance, 0.1, 0LL, 0LL),
        this->fields.state = 3,
        scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu,
        selectAssetPath = this->fields.selectAssetPath,
        v10 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1BE4D18(ScriptObjectListViewMenu_CallbackFunc_TypeInfo),
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL),
        !scriptObjectListViewMenu) )
  {
    sub_1BE4D28(Instance, v7);
  }
  ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v10, 0LL);
}


void __fastcall ScriptAssetListViewMenu__OnClickCancel(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 2 )
  {
    ScriptAssetListViewMenu__EndInput(this, method);
    this->fields.state = 5;
    ScriptAssetListViewMenu__Callback(this, 0, v3);
  }
}


void __fastcall ScriptAssetListViewMenu__OnClickItem(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  void *listViewManager; // x0
  int32_t v6; // w1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_String_o *v13; // x1
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x20
  System_String_o *selectAssetPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v16; // x22

  if ( (byte_4B642C9 & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v4);
    byte_4B642C9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_10;
    v6 = *((_DWORD *)listViewManager + 87);
    if ( (v6 & 0x80000000) == 0 )
    {
      listViewManager = ScriptAssetListViewManager__GetItem((ScriptAssetListViewManager_o *)listViewManager, v6, v2);
      if ( listViewManager )
      {
        v13 = (struct System_String_o *)*((_QWORD *)listViewManager + 14);
        this->fields.selectAssetPath = v13;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.selectAssetPath,
          (int64_t)v13,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu;
        this->fields.state = 3;
        selectAssetPath = this->fields.selectAssetPath;
        v16 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1BE4D18(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL);
        if ( scriptObjectListViewMenu )
        {
          ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v16, 0LL);
          return;
        }
      }
LABEL_10:
      sub_1BE4D28(listViewManager, method);
    }
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
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_String_o *selectObjectPath; // x1
  System_String_o *selectAssetPath; // x21
  System_String_o **v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_String_o *v38; // x22
  System_String_o *StartModeForAssetStorage; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int32_t v46; // w0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_String_o *v53; // x21
  System_String_o *v54; // x22
  ScriptManager_CallbackBranchList_o *v55; // x23
  ScriptAssetListViewManager_o *listViewManager; // x20
  System_Action_o *v57; // x21
  const MethodInfo *v58; // x3

  if ( (byte_4B642CA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&ScriptManager_CallbackBranchList_TypeInfo, v7);
    sub_1BE4ACC(&Method_ScriptAssetListViewMenu_OnClickItem__, v8);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__, v10);
    sub_1BE4ACC(&ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v12);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v13);
    byte_4B642CA = 1;
  }
  v14 = sub_1BE4D18(ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo);
  ScriptAssetListViewMenu___c__DisplayClass20_0___ctor((ScriptAssetListViewMenu___c__DisplayClass20_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_23;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  if ( this->fields.state != 3 )
    return;
  scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu;
  if ( !scriptObjectListViewMenu )
LABEL_23:
    sub_1BE4D28(scriptObjectListViewMenu, v16);
  if ( (result & 0xFFFFFFFE) != 2 )
  {
    ScriptObjectListViewMenu__Close(scriptObjectListViewMenu, 0LL);
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v57 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v57, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
    if ( listViewManager )
    {
      ScriptAssetListViewManager__SetMode_35687844(listViewManager, 1, v57, v58);
      scriptObjectListViewMenu = (ScriptObjectListViewMenu_o *)this->fields.scriptTestAssetCancelButton;
      if ( scriptObjectListViewMenu )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptObjectListViewMenu, 1, 0LL);
        return;
      }
    }
    goto LABEL_23;
  }
  *(_DWORD *)(v14 + 32) = ScriptObjectListViewMenu__GetJumpLine(scriptObjectListViewMenu, 0LL);
  this->fields.selectObjectPath = path;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.selectObjectPath, (int64_t)path, v23, v24, v25, v26, v27, v28);
  selectAssetPath = this->fields.selectAssetPath;
  selectObjectPath = this->fields.selectObjectPath;
  *(_QWORD *)(v14 + 24) = selectObjectPath;
  v31 = (System_String_o **)(v14 + 24);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)selectObjectPath, v32, v33, v34, v35, v36, v37);
  scriptObjectListViewMenu = (ScriptObjectListViewMenu_o *)ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !selectAssetPath )
    goto LABEL_23;
  if ( System_String__StartsWith(selectAssetPath, ScriptManager_TypeInfo->static_fields->textPath, 0LL)
    && System_String__op_Inequality(*v31, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v38 = *v31;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    StartModeForAssetStorage = ScriptManager__GetStartModeForAssetStorage(selectAssetPath, v38, 0LL);
    *(_QWORD *)(v14 + 40) = StartModeForAssetStorage;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)(v14 + 40),
      (int64_t)StartModeForAssetStorage,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    v46 = System_String__IndexOf_62730384(selectAssetPath, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL);
    this->fields.state = 4;
    if ( (v46 & 0x80000000) == 0 )
      selectAssetPath = System_String__Substring(selectAssetPath, v46 + 1, 0LL);
    *(_QWORD *)(v14 + 48) = selectAssetPath;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 48), (int64_t)selectAssetPath, v47, v48, v49, v50, v51, v52);
    v53 = *(System_String_o **)(v14 + 48);
    v54 = *(System_String_o **)(v14 + 24);
    v55 = (ScriptManager_CallbackBranchList_o *)sub_1BE4D18(ScriptManager_CallbackBranchList_TypeInfo);
    ScriptManager_CallbackBranchList___ctor(
      v55,
      (Il2CppObject *)v14,
      Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__,
      0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__DebugScriptLoad(v53, v54, v55, 0LL);
  }
}


void __fastcall ScriptAssetListViewMenu__Open(
        ScriptAssetListViewMenu_o *this,
        ScriptAssetListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t state; // w8
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *scriptTestAssetRootObject; // x0

  state = this->fields.state;
  if ( state == 6 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    scriptTestAssetRootObject = this->fields.scriptTestAssetRootObject;
    if ( !scriptTestAssetRootObject
      || (UnityEngine_GameObject__SetActive(scriptTestAssetRootObject, 1, 0LL),
          (scriptTestAssetRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL)
      || (ListViewManager__set_IsInput((ListViewManager_o *)scriptTestAssetRootObject, 0, 0LL),
          (scriptTestAssetRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestAssetCancelButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestAssetRootObject, 0, 0LL),
          (scriptTestAssetRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
    {
      sub_1BE4D28(scriptTestAssetRootObject, v10);
    }
    ScriptAssetListViewManager__CreateList((ScriptAssetListViewManager_o *)scriptTestAssetRootObject, v10);
  }
  this->fields.state = 1;
  ScriptAssetListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall ScriptAssetListViewMenu__StartInput(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ScriptAssetListViewManager_o *listViewManager; // x20
  System_Action_o *v5; // x21
  UnityEngine_Behaviour_o *scriptTestAssetCancelButton; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4B642C8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ScriptAssetListViewMenu_OnClickItem__, v3);
    byte_4B642C8 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v5 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
  if ( !listViewManager
    || (ScriptAssetListViewManager__SetMode_35687844(listViewManager, 1, v5, v8),
        (scriptTestAssetCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestAssetCancelButton) == 0LL) )
  {
    sub_1BE4D28(scriptTestAssetCancelButton, v7);
  }
  UnityEngine_Behaviour__set_enabled(scriptTestAssetCancelButton, 1, 0LL);
}


void __fastcall ScriptAssetListViewMenu__StartMenu(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ScriptAssetListViewMenu_CallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4B642C5 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, v3);
    sub_1BE4ACC(&Method_ScriptAssetListViewMenu__StartMenu_b__9_0__, v4);
    sub_1BE4ACC(&StringLiteral_12729/*"ScriptActionEncrypt"*/, v5);
    byte_4B642C5 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_12729/*"ScriptActionEncrypt"*/, 0LL);
  v6 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_1BE4D18(ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
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
  struct ScriptAssetListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptAssetListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptAssetListViewMenu_o *v11; // x0
  ScriptAssetListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B642C6 & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4B642C6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptAssetListViewMenu_CallbackFunc_c *)v8->klass != ScriptAssetListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  ScriptAssetListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptAssetListViewMenu__remove_callbackFunc(
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

  if ( (byte_4B642C7 & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4B642C7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptAssetListViewMenu_CallbackFunc_c *)v8->klass != ScriptAssetListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  ScriptAssetListViewMenu__StartInput(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewMenu_CallbackFunc___ctor(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A23D2C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A23CE4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptAssetListViewMenu_CallbackFunc__BeginInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B642DB & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, result);
    byte_4B642DB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall ScriptAssetListViewMenu_CallbackFunc__EndInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall ScriptAssetListViewMenu_CallbackFunc__Invoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
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
  const MethodInfo *v3; // x3
  ScriptAssetListViewMenu___c__DisplayClass20_0_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ScriptAssetListViewMenu_o *_4__this; // x8
  ScriptBranchMenu_o *scriptBranchMenu; // x21
  ScriptBranchMenu_CallbackFunc_o *_9__1; // x23
  const MethodInfo *v13; // x3
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_String_o *startMode; // x19
  System_String_o *name; // x21
  int32_t jumpLine; // w22
  System_String_o *labelPath; // x23
  Il2CppObject *v24; // x24
  ScriptManager_CallbackFunc_o *v25; // x20

  v5 = this;
  if ( (byte_4B642DC & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptBranchMenu_CallbackFunc_TypeInfo, list);
    sub_1BE4ACC(&ScriptManager_CallbackFunc_TypeInfo, v6);
    sub_1BE4ACC(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, v7);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v8);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_1BE4ACC(
                                                                &Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
                                                                v9);
    byte_4B642DC = 1;
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
      _9__1 = (ScriptBranchMenu_CallbackFunc_o *)sub_1BE4D18(ScriptBranchMenu_CallbackFunc_TypeInfo);
      ScriptBranchMenu_CallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)v5,
        Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
        v13);
      v5->fields.__9__1 = _9__1;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v5->fields.__9__1, (int64_t)_9__1, v14, v15, v16, v17, v18, v19);
    }
    if ( !scriptBranchMenu )
LABEL_12:
      sub_1BE4D28(this, list);
    ScriptBranchMenu__Open(scriptBranchMenu, list, _9__1, v3);
  }
  else
  {
    startMode = v5->fields.startMode;
    name = v5->fields.name;
    jumpLine = v5->fields.jumpLine;
    v24 = (Il2CppObject *)v5->fields.__4__this;
    labelPath = v5->fields.labelPath;
    v25 = (ScriptManager_CallbackFunc_o *)sub_1BE4D18(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(v25, v24, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v25, 0LL);
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
  int32_t jumpLine; // w22
  System_String_o *labelPath; // x23
  Il2CppObject *v14; // x24
  ScriptManager_CallbackFunc_o *v15; // x19
  struct ScriptAssetListViewMenu_o *v16; // x21
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x19
  System_String_o *selectAssetPath; // x20
  ScriptObjectListViewMenu_CallbackFunc_o *v19; // x22
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3

  v4 = this;
  if ( (byte_4B642DD & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, b);
    sub_1BE4ACC(&ScriptManager_CallbackFunc_TypeInfo, v5);
    sub_1BE4ACC(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, v6);
    sub_1BE4ACC(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v7);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_1BE4ACC(&ScriptManager_TypeInfo, v8);
    byte_4B642DD = 1;
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
    v16 = v4->fields.__4__this;
    if ( v16 )
    {
      v16->fields.state = 3;
      scriptObjectListViewMenu = v16->fields.scriptObjectListViewMenu;
      selectAssetPath = v16->fields.selectAssetPath;
      v19 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1BE4D18(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
      ScriptObjectListViewMenu_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)v16,
        Method_ScriptAssetListViewMenu_OnEndSelectObject__,
        v20);
      if ( scriptObjectListViewMenu )
      {
        ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v19, v21);
        return;
      }
    }
LABEL_12:
    sub_1BE4D28(this, b);
  }
  startMode = v4->fields.startMode;
  name = v4->fields.name;
  jumpLine = v4->fields.jumpLine;
  v14 = (Il2CppObject *)v4->fields.__4__this;
  labelPath = v4->fields.labelPath;
  v15 = (ScriptManager_CallbackFunc_o *)sub_1BE4D18(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v15, v14, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v15, 0LL);
}