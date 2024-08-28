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
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ScriptAssetListViewMenu_CallbackFunc_o *v5; // x20
  struct ScriptAssetListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B68678(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
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
    sub_1B68930(listViewManager, v3);
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
      sub_1B68930(listViewManager, method);
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

  if ( (byte_4A0650B & 1) == 0 )
  {
    sub_1B686D4(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, isExit);
    sub_1B686D4(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A0650B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein((CommonUI_o *)Instance, 0.1, 0LL, 0LL),
        this->fields.state = 3,
        scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu,
        selectAssetPath = this->fields.selectAssetPath,
        v10 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1B68920(ScriptObjectListViewMenu_CallbackFunc_TypeInfo),
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL),
        !scriptObjectListViewMenu) )
  {
    sub_1B68930(Instance, v7);
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
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *v9; // x1
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x20
  System_String_o *selectAssetPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v12; // x22

  if ( (byte_4A06509 & 1) == 0 )
  {
    sub_1B686D4(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, method);
    sub_1B686D4(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v4);
    byte_4A06509 = 1;
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
        v9 = (struct System_String_o *)*((_QWORD *)listViewManager + 14);
        this->fields.selectAssetPath = v9;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.selectAssetPath, (int32_t)v9, v7, v8);
        scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu;
        this->fields.state = 3;
        selectAssetPath = this->fields.selectAssetPath;
        v12 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1B68920(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL);
        if ( scriptObjectListViewMenu )
        {
          ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v12, 0LL);
          return;
        }
      }
LABEL_10:
      sub_1B68930(listViewManager, method);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_String_o *selectObjectPath; // x1
  System_String_o *selectAssetPath; // x21
  System_String_o **v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x22
  System_String_o *StartModeForAssetStorage; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x21
  System_String_o *v34; // x22
  ScriptManager_CallbackBranchList_o *v35; // x23
  ScriptAssetListViewManager_o *listViewManager; // x20
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x3

  if ( (byte_4A0650A & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B686D4(&ScriptManager_CallbackBranchList_TypeInfo, v7);
    sub_1B686D4(&Method_ScriptAssetListViewMenu_OnClickItem__, v8);
    sub_1B686D4(&ScriptManager_TypeInfo, v9);
    sub_1B686D4(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__, v10);
    sub_1B686D4(&ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo, v11);
    sub_1B686D4(&StringLiteral_1123/*"/"*/, v12);
    sub_1B686D4(&StringLiteral_1/*""*/, v13);
    byte_4A0650A = 1;
  }
  v14 = sub_1B68920(ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_23;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  if ( this->fields.state != 3 )
    return;
  scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu;
  if ( !scriptObjectListViewMenu )
LABEL_23:
    sub_1B68930(scriptObjectListViewMenu, v16);
  if ( (result & 0xFFFFFFFE) != 2 )
  {
    ScriptObjectListViewMenu__Close(scriptObjectListViewMenu, 0LL);
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v37 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v37, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
    if ( listViewManager )
    {
      ScriptAssetListViewManager__SetMode_34661740(listViewManager, 1, v37, v38);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.selectObjectPath, (int32_t)path, v19, v20);
  selectAssetPath = this->fields.selectAssetPath;
  selectObjectPath = this->fields.selectObjectPath;
  *(_QWORD *)(v14 + 24) = selectObjectPath;
  v23 = (System_String_o **)(v14 + 24);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)selectObjectPath, v24, v25);
  scriptObjectListViewMenu = (ScriptObjectListViewMenu_o *)ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !selectAssetPath )
    goto LABEL_23;
  if ( System_String__StartsWith(selectAssetPath, ScriptManager_TypeInfo->static_fields->textPath, 0LL)
    && System_String__op_Inequality(*v23, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v26 = *v23;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    StartModeForAssetStorage = ScriptManager__GetStartModeForAssetStorage(selectAssetPath, v26, 0LL);
    *(_QWORD *)(v14 + 40) = StartModeForAssetStorage;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v14 + 40), (int32_t)StartModeForAssetStorage, v28, v29);
    v30 = System_String__IndexOf_61451044(selectAssetPath, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL);
    this->fields.state = 4;
    if ( (v30 & 0x80000000) == 0 )
      selectAssetPath = System_String__Substring(selectAssetPath, v30 + 1, 0LL);
    *(_QWORD *)(v14 + 48) = selectAssetPath;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v14 + 48), (int32_t)selectAssetPath, v31, v32);
    v33 = *(System_String_o **)(v14 + 48);
    v34 = *(System_String_o **)(v14 + 24);
    v35 = (ScriptManager_CallbackBranchList_o *)sub_1B68920(ScriptManager_CallbackBranchList_TypeInfo);
    ScriptManager_CallbackBranchList___ctor(
      v35,
      (Il2CppObject *)v14,
      Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__,
      0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__DebugScriptLoad(v33, v34, v35, 0LL);
  }
}


void __fastcall ScriptAssetListViewMenu__Open(
        ScriptAssetListViewMenu_o *this,
        ScriptAssetListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t state; // w8
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *scriptTestAssetRootObject; // x0

  state = this->fields.state;
  if ( state == 6 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
    scriptTestAssetRootObject = this->fields.scriptTestAssetRootObject;
    if ( !scriptTestAssetRootObject
      || (UnityEngine_GameObject__SetActive(scriptTestAssetRootObject, 1, 0LL),
          (scriptTestAssetRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL)
      || (ListViewManager__set_IsInput((ListViewManager_o *)scriptTestAssetRootObject, 0, 0LL),
          (scriptTestAssetRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestAssetCancelButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestAssetRootObject, 0, 0LL),
          (scriptTestAssetRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
    {
      sub_1B68930(scriptTestAssetRootObject, v6);
    }
    ScriptAssetListViewManager__CreateList((ScriptAssetListViewManager_o *)scriptTestAssetRootObject, v6);
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

  if ( (byte_4A06508 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_ScriptAssetListViewMenu_OnClickItem__, v3);
    byte_4A06508 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v5 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
  if ( !listViewManager
    || (ScriptAssetListViewManager__SetMode_34661740(listViewManager, 1, v5, v8),
        (scriptTestAssetCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestAssetCancelButton) == 0LL) )
  {
    sub_1B68930(scriptTestAssetCancelButton, v7);
  }
  UnityEngine_Behaviour__set_enabled(scriptTestAssetCancelButton, 1, 0LL);
}


void __fastcall ScriptAssetListViewMenu__StartMenu(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ScriptAssetListViewMenu_CallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4A06505 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    sub_1B686D4(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, v3);
    sub_1B686D4(&Method_ScriptAssetListViewMenu__StartMenu_b__9_0__, v4);
    sub_1B686D4(&StringLiteral_12485/*"ScriptActionEncrypt"*/, v5);
    byte_4A06505 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_12485/*"ScriptActionEncrypt"*/, 0LL);
  v6 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_1B68920(ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
  ScriptAssetListViewMenu_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ScriptAssetListViewMenu__StartMenu_b__9_0__,
    v7);
  ScriptAssetListViewMenu__Open(this, v6, v8);
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

  if ( (byte_4A06506 & 1) == 0 )
  {
    sub_1B686D4(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4A06506 = 1;
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
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B68BF0(v8);
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

  if ( (byte_4A06507 & 1) == 0 )
  {
    sub_1B686D4(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4A06507 = 1;
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
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B68BF0(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19AD9F8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AD9B0;
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
  if ( (byte_4A0650C & 1) == 0 )
  {
    sub_1B686D4(&bool_TypeInfo, result);
    byte_4A0650C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B68688(this, v9, callback, object);
}


void __fastcall ScriptAssetListViewMenu_CallbackFunc__EndInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *startMode; // x19
  System_String_o *name; // x21
  int32_t jumpLine; // w22
  System_String_o *labelPath; // x23
  Il2CppObject *v20; // x24
  ScriptManager_CallbackFunc_o *v21; // x20

  v5 = this;
  if ( (byte_4A0650D & 1) == 0 )
  {
    sub_1B686D4(&ScriptBranchMenu_CallbackFunc_TypeInfo, list);
    sub_1B686D4(&ScriptManager_CallbackFunc_TypeInfo, v6);
    sub_1B686D4(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, v7);
    sub_1B686D4(&ScriptManager_TypeInfo, v8);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_1B686D4(
                                                                &Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
                                                                v9);
    byte_4A0650D = 1;
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
      _9__1 = (ScriptBranchMenu_CallbackFunc_o *)sub_1B68920(ScriptBranchMenu_CallbackFunc_TypeInfo);
      ScriptBranchMenu_CallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)v5,
        Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
        v13);
      v5->fields.__9__1 = _9__1;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v5->fields.__9__1, (int32_t)_9__1, v14, v15);
    }
    if ( !scriptBranchMenu )
LABEL_12:
      sub_1B68930(this, list);
    ScriptBranchMenu__Open(scriptBranchMenu, list, _9__1, v3);
  }
  else
  {
    startMode = v5->fields.startMode;
    name = v5->fields.name;
    jumpLine = v5->fields.jumpLine;
    v20 = (Il2CppObject *)v5->fields.__4__this;
    labelPath = v5->fields.labelPath;
    v21 = (ScriptManager_CallbackFunc_o *)sub_1B68920(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(v21, v20, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v21, 0LL);
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

  v4 = this;
  if ( (byte_4A0650E & 1) == 0 )
  {
    sub_1B686D4(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, b);
    sub_1B686D4(&ScriptManager_CallbackFunc_TypeInfo, v5);
    sub_1B686D4(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, v6);
    sub_1B686D4(&Method_ScriptAssetListViewMenu_OnEndSelectObject__, v7);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_1B686D4(&ScriptManager_TypeInfo, v8);
    byte_4A0650E = 1;
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
      v19 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1B68920(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
      ScriptObjectListViewMenu_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)v16,
        Method_ScriptAssetListViewMenu_OnEndSelectObject__,
        0LL);
      if ( scriptObjectListViewMenu )
      {
        ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v19, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B68930(this, b);
  }
  startMode = v4->fields.startMode;
  name = v4->fields.name;
  jumpLine = v4->fields.jumpLine;
  v14 = (Il2CppObject *)v4->fields.__4__this;
  labelPath = v4->fields.labelPath;
  v15 = (ScriptManager_CallbackFunc_o *)sub_1B68920(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v15, v14, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v15, 0LL);
}