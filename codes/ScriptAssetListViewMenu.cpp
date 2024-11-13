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
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(listViewManager, v3);
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
      sub_1BCAA3C(listViewManager, method);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x20
  System_String_o *selectAssetPath; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  ScriptObjectListViewMenu_CallbackFunc_o *v15; // x22

  if ( (byte_4B13937 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, isExit, method);
    sub_1BCA7E0(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B13937 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein((CommonUI_o *)Instance, 0.1, 0LL, 0LL),
        this->fields.state = 3,
        scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu,
        selectAssetPath = this->fields.selectAssetPath,
        v15 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                           ScriptObjectListViewMenu_CallbackFunc_TypeInfo,
                                                           v12,
                                                           v13,
                                                           v14),
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL),
        !scriptObjectListViewMenu) )
  {
    sub_1BCAA3C(Instance, v9);
  }
  ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v15, 0LL);
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
  __int64 v5; // x2
  void *listViewManager; // x0
  int32_t v7; // w1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_String_o *v14; // x1
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x20
  System_String_o *selectAssetPath; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ScriptObjectListViewMenu_CallbackFunc_o *v20; // x22

  if ( (byte_4B13935 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v4, v5);
    byte_4B13935 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_10;
    v7 = *((_DWORD *)listViewManager + 87);
    if ( (v7 & 0x80000000) == 0 )
    {
      listViewManager = ScriptAssetListViewManager__GetItem((ScriptAssetListViewManager_o *)listViewManager, v7, v2);
      if ( listViewManager )
      {
        v14 = (struct System_String_o *)*((_QWORD *)listViewManager + 14);
        this->fields.selectAssetPath = v14;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.selectAssetPath,
          (int64_t)v14,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu;
        this->fields.state = 3;
        selectAssetPath = this->fields.selectAssetPath;
        v20 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                           ScriptObjectListViewMenu_CallbackFunc_TypeInfo,
                                                           v17,
                                                           v18,
                                                           v19);
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL);
        if ( scriptObjectListViewMenu )
        {
          ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v20, 0LL);
          return;
        }
      }
LABEL_10:
      sub_1BCAA3C(listViewManager, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_String_o *selectObjectPath; // x1
  System_String_o *selectAssetPath; // x21
  System_String_o **v38; // x22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  System_String_o *v46; // x22
  System_String_o *StartModeForAssetStorage; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int32_t v54; // w0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_String_o *v61; // x21
  System_String_o *v62; // x22
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  ScriptManager_CallbackBranchList_o *v66; // x23
  __int64 v67; // x1
  ScriptAssetListViewManager_o *listViewManager; // x20
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Action_o *v72; // x21
  const MethodInfo *v73; // x3

  if ( (byte_4B13936 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, path);
    sub_1BCA7E0(&ScriptManager_CallbackBranchList_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ScriptAssetListViewMenu_OnClickItem__, v9, v10);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__, v13, v14);
    sub_1BCA7E0(&ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B13936 = 1;
  }
  v21 = sub_1BCAA2C(ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo, *(_QWORD *)&result, path, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_23;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  if ( this->fields.state != 3 )
    return;
  scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu;
  if ( !scriptObjectListViewMenu )
LABEL_23:
    sub_1BCAA3C(scriptObjectListViewMenu, v23);
  if ( (result & 0xFFFFFFFE) != 2 )
  {
    ScriptObjectListViewMenu__Close(scriptObjectListViewMenu, 0LL);
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v72 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v69, v70, v71);
    System_Action___ctor(v72, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
    if ( listViewManager )
    {
      ScriptAssetListViewManager__SetMode_35513960(listViewManager, 1, v72, v73);
      scriptObjectListViewMenu = (ScriptObjectListViewMenu_o *)this->fields.scriptTestAssetCancelButton;
      if ( scriptObjectListViewMenu )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptObjectListViewMenu, 1, 0LL);
        return;
      }
    }
    goto LABEL_23;
  }
  *(_DWORD *)(v21 + 32) = ScriptObjectListViewMenu__GetJumpLine(scriptObjectListViewMenu, 0LL);
  this->fields.selectObjectPath = path;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectObjectPath, (int64_t)path, v30, v31, v32, v33, v34, v35);
  selectAssetPath = this->fields.selectAssetPath;
  selectObjectPath = this->fields.selectObjectPath;
  *(_QWORD *)(v21 + 24) = selectObjectPath;
  v38 = (System_String_o **)(v21 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)selectObjectPath, v39, v40, v41, v42, v43, v44);
  scriptObjectListViewMenu = (ScriptObjectListViewMenu_o *)ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v23);
  if ( !selectAssetPath )
    goto LABEL_23;
  if ( System_String__StartsWith(selectAssetPath, ScriptManager_TypeInfo->static_fields->textPath, 0LL)
    && System_String__op_Inequality(*v38, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v46 = *v38;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v45);
    StartModeForAssetStorage = ScriptManager__GetStartModeForAssetStorage(selectAssetPath, v46, 0LL);
    *(_QWORD *)(v21 + 40) = StartModeForAssetStorage;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v21 + 40),
      (int64_t)StartModeForAssetStorage,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v54 = System_String__IndexOf_62432796(selectAssetPath, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL);
    this->fields.state = 4;
    if ( (v54 & 0x80000000) == 0 )
      selectAssetPath = System_String__Substring(selectAssetPath, v54 + 1, 0LL);
    *(_QWORD *)(v21 + 48) = selectAssetPath;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 48), (int64_t)selectAssetPath, v55, v56, v57, v58, v59, v60);
    v61 = *(System_String_o **)(v21 + 48);
    v62 = *(System_String_o **)(v21 + 24);
    v66 = (ScriptManager_CallbackBranchList_o *)sub_1BCAA2C(ScriptManager_CallbackBranchList_TypeInfo, v63, v64, v65);
    ScriptManager_CallbackBranchList___ctor(
      v66,
      (Il2CppObject *)v21,
      Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__,
      0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v67);
    ScriptManager__DebugScriptLoad(v61, v62, v66, 0LL);
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
    sub_1BCA784(
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
      sub_1BCAA3C(scriptTestAssetRootObject, v10);
    }
    ScriptAssetListViewManager__CreateList((ScriptAssetListViewManager_o *)scriptTestAssetRootObject, v10);
  }
  this->fields.state = 1;
  ScriptAssetListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall ScriptAssetListViewMenu__StartInput(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  ScriptAssetListViewManager_o *listViewManager; // x20
  System_Action_o *v8; // x21
  UnityEngine_Behaviour_o *scriptTestAssetCancelButton; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4B13934 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScriptAssetListViewMenu_OnClickItem__, v5, v6);
    byte_4B13934 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
  if ( !listViewManager
    || (ScriptAssetListViewManager__SetMode_35513960(listViewManager, 1, v8, v11),
        (scriptTestAssetCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestAssetCancelButton) == 0LL) )
  {
    sub_1BCAA3C(scriptTestAssetCancelButton, v10);
  }
  UnityEngine_Behaviour__set_enabled(scriptTestAssetCancelButton, 1, 0LL);
}


void __fastcall ScriptAssetListViewMenu__StartMenu(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  ScriptAssetListViewMenu_CallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B13931 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScriptAssetListViewMenu__StartMenu_b__9_0__, v6, v7);
    sub_1BCA7E0(&StringLiteral_12692/*"ScriptActionEncrypt"*/, v8, v9);
    byte_4B13931 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_12692/*"ScriptActionEncrypt"*/, 0LL);
  v14 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ScriptAssetListViewMenu_CallbackFunc_TypeInfo,
                                                    v11,
                                                    v12,
                                                    v13);
  ScriptAssetListViewMenu_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ScriptAssetListViewMenu__StartMenu_b__9_0__,
    v15);
  ScriptAssetListViewMenu__Open(this, v14, v16);
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

  if ( (byte_4B13932 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13932 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B13933 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13933 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A09F3C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09EF4;
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
  if ( (byte_4B13938 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B13938 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ScriptAssetListViewMenu_CallbackFunc__EndInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  ScriptAssetListViewMenu___c__DisplayClass20_0_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct ScriptAssetListViewMenu_o *_4__this; // x8
  ScriptBranchMenu_o *scriptBranchMenu; // x21
  ScriptBranchMenu_CallbackFunc_o *_9__1; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_String_o *startMode; // x19
  System_String_o *name; // x21
  int32_t jumpLine; // w22
  System_String_o *labelPath; // x23
  Il2CppObject *v27; // x24
  ScriptManager_CallbackFunc_o *v28; // x20
  __int64 v29; // x1

  v5 = this;
  if ( (byte_4B13939 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptBranchMenu_CallbackFunc_TypeInfo, list, method);
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, v8, v9);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v10, v11);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_1BCA7E0(
                                                                &Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
                                                                v12,
                                                                v13);
    byte_4B13939 = 1;
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
      _9__1 = (ScriptBranchMenu_CallbackFunc_o *)sub_1BCAA2C(ScriptBranchMenu_CallbackFunc_TypeInfo, list, method, v3);
      ScriptBranchMenu_CallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)v5,
        Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
        0LL);
      v5->fields.__9__1 = _9__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__1, (int64_t)_9__1, v17, v18, v19, v20, v21, v22);
    }
    if ( !scriptBranchMenu )
LABEL_12:
      sub_1BCAA3C(this, list);
    ScriptBranchMenu__Open(scriptBranchMenu, list, _9__1, 0LL);
  }
  else
  {
    startMode = v5->fields.startMode;
    name = v5->fields.name;
    jumpLine = v5->fields.jumpLine;
    v27 = (Il2CppObject *)v5->fields.__4__this;
    labelPath = v5->fields.labelPath;
    v28 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, list, method, v3);
    ScriptManager_CallbackFunc___ctor(v28, v27, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v29);
    ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v28, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct ScriptAssetListViewMenu_o *_4__this; // x8
  __int64 v14; // x2
  __int64 v15; // x3
  System_String_o *startMode; // x20
  System_String_o *name; // x21
  int32_t jumpLine; // w22
  System_String_o *labelPath; // x23
  Il2CppObject *v20; // x24
  ScriptManager_CallbackFunc_o *v21; // x19
  __int64 v22; // x1
  struct ScriptAssetListViewMenu_o *v23; // x21
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x19
  System_String_o *selectAssetPath; // x20
  ScriptObjectListViewMenu_CallbackFunc_o *v26; // x22

  v4 = this;
  if ( (byte_4B1393A & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, b, method);
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, v7, v8);
    sub_1BCA7E0(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v9, v10);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, v11, v12);
    byte_4B1393A = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)_4__this->fields.scriptBranchMenu;
  if ( !this )
    goto LABEL_12;
  ScriptBranchMenu__Close((ScriptBranchMenu_o *)this, 0LL);
  if ( !b )
  {
    v23 = v4->fields.__4__this;
    if ( v23 )
    {
      v23->fields.state = 3;
      scriptObjectListViewMenu = v23->fields.scriptObjectListViewMenu;
      selectAssetPath = v23->fields.selectAssetPath;
      v26 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                         ScriptObjectListViewMenu_CallbackFunc_TypeInfo,
                                                         b,
                                                         v14,
                                                         v15);
      ScriptObjectListViewMenu_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)v23,
        Method_ScriptAssetListViewMenu_OnEndSelectObject__,
        0LL);
      if ( scriptObjectListViewMenu )
      {
        ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v26, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(this, b);
  }
  startMode = v4->fields.startMode;
  name = v4->fields.name;
  jumpLine = v4->fields.jumpLine;
  v20 = (Il2CppObject *)v4->fields.__4__this;
  labelPath = v4->fields.labelPath;
  v21 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, b, v14, v15);
  ScriptManager_CallbackFunc___ctor(v21, v20, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v22);
  ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v21, 0LL);
}