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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
    sub_1B8880C(listViewManager, v3);
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
      sub_1B8880C(listViewManager, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0LL);
  }
}


void __fastcall ScriptAssetListViewMenu__EndPlayScriptDebug(
        ScriptAssetListViewMenu_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x20
  System_String_o *selectAssetPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v8; // x22

  if ( (byte_4A589DC & 1) == 0 )
  {
    sub_1B885B0(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ScriptAssetListViewMenu_OnEndSelectObject__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A589DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein((CommonUI_o *)Instance, 0.1, 0LL, 0LL),
        this->fields.state = 3,
        scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu,
        selectAssetPath = this->fields.selectAssetPath,
        v8 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1B887FC(ScriptObjectListViewMenu_CallbackFunc_TypeInfo),
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL),
        !scriptObjectListViewMenu) )
  {
    sub_1B8880C(Instance, v5);
  }
  ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v8, 0LL);
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
  void *listViewManager; // x0
  int32_t v5; // w1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *v8; // x1
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x20
  System_String_o *selectAssetPath; // x21
  ScriptObjectListViewMenu_CallbackFunc_o *v11; // x22

  if ( (byte_4A589DA & 1) == 0 )
  {
    sub_1B885B0(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ScriptAssetListViewMenu_OnEndSelectObject__);
    byte_4A589DA = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_10;
    v5 = *((_DWORD *)listViewManager + 87);
    if ( (v5 & 0x80000000) == 0 )
    {
      listViewManager = ScriptAssetListViewManager__GetItem((ScriptAssetListViewManager_o *)listViewManager, v5, v2);
      if ( listViewManager )
      {
        v8 = (struct System_String_o *)*((_QWORD *)listViewManager + 14);
        this->fields.selectAssetPath = v8;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectAssetPath, (int32_t)v8, v6, v7);
        scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu;
        this->fields.state = 3;
        selectAssetPath = this->fields.selectAssetPath;
        v11 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1B887FC(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
        ScriptObjectListViewMenu_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_ScriptAssetListViewMenu_OnEndSelectObject__,
          0LL);
        if ( scriptObjectListViewMenu )
        {
          ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v11, 0LL);
          return;
        }
      }
LABEL_10:
      sub_1B8880C(listViewManager, method);
    }
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
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_String_o *selectObjectPath; // x1
  System_String_o *selectAssetPath; // x21
  System_String_o **v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x22
  System_String_o *StartModeForAssetStorage; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x21
  System_String_o *v27; // x22
  ScriptManager_CallbackBranchList_o *v28; // x23
  ScriptAssetListViewManager_o *listViewManager; // x20
  System_Action_o *v30; // x21
  const MethodInfo *v31; // x3

  if ( (byte_4A589DB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ScriptManager_CallbackBranchList_TypeInfo);
    sub_1B885B0(&Method_ScriptAssetListViewMenu_OnClickItem__);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__);
    sub_1B885B0(&ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A589DB = 1;
  }
  v7 = sub_1B887FC(ScriptAssetListViewMenu___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_23;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  if ( this->fields.state != 3 )
    return;
  scriptObjectListViewMenu = this->fields.scriptObjectListViewMenu;
  if ( !scriptObjectListViewMenu )
LABEL_23:
    sub_1B8880C(scriptObjectListViewMenu, v9);
  if ( (result & 0xFFFFFFFE) != 2 )
  {
    ScriptObjectListViewMenu__Close(scriptObjectListViewMenu, 0LL);
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v30 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
    if ( listViewManager )
    {
      ScriptAssetListViewManager__SetMode_34904560(listViewManager, 1, v30, v31);
      scriptObjectListViewMenu = (ScriptObjectListViewMenu_o *)this->fields.scriptTestAssetCancelButton;
      if ( scriptObjectListViewMenu )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptObjectListViewMenu, 1, 0LL);
        return;
      }
    }
    goto LABEL_23;
  }
  *(_DWORD *)(v7 + 32) = ScriptObjectListViewMenu__GetJumpLine(scriptObjectListViewMenu, 0LL);
  this->fields.selectObjectPath = path;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectObjectPath, (int32_t)path, v12, v13);
  selectAssetPath = this->fields.selectAssetPath;
  selectObjectPath = this->fields.selectObjectPath;
  *(_QWORD *)(v7 + 24) = selectObjectPath;
  v16 = (System_String_o **)(v7 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)selectObjectPath, v17, v18);
  scriptObjectListViewMenu = (ScriptObjectListViewMenu_o *)ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !selectAssetPath )
    goto LABEL_23;
  if ( System_String__StartsWith(selectAssetPath, ScriptManager_TypeInfo->static_fields->textPath, 0LL)
    && System_String__op_Inequality(*v16, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v19 = *v16;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    StartModeForAssetStorage = ScriptManager__GetStartModeForAssetStorage(selectAssetPath, v19, 0LL);
    *(_QWORD *)(v7 + 40) = StartModeForAssetStorage;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)StartModeForAssetStorage, v21, v22);
    v23 = System_String__IndexOf_61738608(selectAssetPath, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL);
    this->fields.state = 4;
    if ( (v23 & 0x80000000) == 0 )
      selectAssetPath = System_String__Substring(selectAssetPath, v23 + 1, 0LL);
    *(_QWORD *)(v7 + 48) = selectAssetPath;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)selectAssetPath, v24, v25);
    v26 = *(System_String_o **)(v7 + 48);
    v27 = *(System_String_o **)(v7 + 24);
    v28 = (ScriptManager_CallbackBranchList_o *)sub_1B887FC(ScriptManager_CallbackBranchList_TypeInfo);
    ScriptManager_CallbackBranchList___ctor(
      v28,
      (Il2CppObject *)v7,
      Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__0__,
      0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__DebugScriptLoad(v26, v27, v28, 0LL);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
    scriptTestAssetRootObject = this->fields.scriptTestAssetRootObject;
    if ( !scriptTestAssetRootObject
      || (UnityEngine_GameObject__SetActive(scriptTestAssetRootObject, 1, 0LL),
          (scriptTestAssetRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL)
      || (ListViewManager__set_IsInput((ListViewManager_o *)scriptTestAssetRootObject, 0, 0LL),
          (scriptTestAssetRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestAssetCancelButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestAssetRootObject, 0, 0LL),
          (scriptTestAssetRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
    {
      sub_1B8880C(scriptTestAssetRootObject, v6);
    }
    ScriptAssetListViewManager__CreateList((ScriptAssetListViewManager_o *)scriptTestAssetRootObject, v6);
  }
  this->fields.state = 1;
  ScriptAssetListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall ScriptAssetListViewMenu__StartInput(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  ScriptAssetListViewManager_o *listViewManager; // x20
  System_Action_o *v4; // x21
  UnityEngine_Behaviour_o *scriptTestAssetCancelButton; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A589D9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ScriptAssetListViewMenu_OnClickItem__);
    byte_4A589D9 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScriptAssetListViewMenu_OnClickItem__, 0LL);
  if ( !listViewManager
    || (ScriptAssetListViewManager__SetMode_34904560(listViewManager, 1, v4, v7),
        (scriptTestAssetCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestAssetCancelButton) == 0LL) )
  {
    sub_1B8880C(scriptTestAssetCancelButton, v6);
  }
  UnityEngine_Behaviour__set_enabled(scriptTestAssetCancelButton, 1, 0LL);
}


void __fastcall ScriptAssetListViewMenu__StartMenu(ScriptAssetListViewMenu_o *this, const MethodInfo *method)
{
  ScriptAssetListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4A589D6 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ScriptAssetListViewMenu__StartMenu_b__9_0__);
    sub_1B885B0(&StringLiteral_12535/*"ScriptActionEncrypt"*/);
    byte_4A589D6 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__resetAssetStorageVersion((System_String_o *)StringLiteral_12535/*"ScriptActionEncrypt"*/, 0LL);
  v3 = (ScriptAssetListViewMenu_CallbackFunc_o *)sub_1B887FC(ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
  ScriptAssetListViewMenu_CallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ScriptAssetListViewMenu__StartMenu_b__9_0__,
    v4);
  ScriptAssetListViewMenu__Open(this, v3, v5);
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

  if ( (byte_4A589D7 & 1) == 0 )
  {
    sub_1B885B0(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    byte_4A589D7 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A589D8 & 1) == 0 )
  {
    sub_1B885B0(&ScriptAssetListViewMenu_CallbackFunc_TypeInfo);
    byte_4A589D8 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CBC4C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CBC04;
}


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
  if ( (byte_4A589DD & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A589DD = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ScriptAssetListViewMenu_CallbackFunc__EndInvoke(
        ScriptAssetListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  ScriptAssetListViewMenu___c__DisplayClass20_0_o *v4; // x20
  struct ScriptAssetListViewMenu_o *_4__this; // x8
  ScriptBranchMenu_o *scriptBranchMenu; // x21
  ScriptBranchMenu_CallbackFunc_o *_9__1; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *startMode; // x19
  System_String_o *name; // x21
  int32_t jumpLine; // w22
  System_String_o *labelPath; // x23
  Il2CppObject *v14; // x24
  ScriptManager_CallbackFunc_o *v15; // x20

  v4 = this;
  if ( (byte_4A589DE & 1) == 0 )
  {
    sub_1B885B0(&ScriptBranchMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__);
    sub_1B885B0(&ScriptManager_TypeInfo);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_1B885B0(&Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__);
    byte_4A589DE = 1;
  }
  if ( list )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_12;
    scriptBranchMenu = _4__this->fields.scriptBranchMenu;
    _9__1 = v4->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (ScriptBranchMenu_CallbackFunc_o *)sub_1B887FC(ScriptBranchMenu_CallbackFunc_TypeInfo);
      ScriptBranchMenu_CallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)v4,
        Method_ScriptAssetListViewMenu___c__DisplayClass20_0__OnEndSelectObject_b__1__,
        0LL);
      v4->fields.__9__1 = _9__1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v8, v9);
    }
    if ( !scriptBranchMenu )
LABEL_12:
      sub_1B8880C(this, list);
    ScriptBranchMenu__Open(scriptBranchMenu, list, _9__1, 0LL);
  }
  else
  {
    startMode = v4->fields.startMode;
    name = v4->fields.name;
    jumpLine = v4->fields.jumpLine;
    v14 = (Il2CppObject *)v4->fields.__4__this;
    labelPath = v4->fields.labelPath;
    v15 = (ScriptManager_CallbackFunc_o *)sub_1B887FC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(v15, v14, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v15, 0LL);
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
  int32_t jumpLine; // w22
  System_String_o *labelPath; // x23
  Il2CppObject *v10; // x24
  ScriptManager_CallbackFunc_o *v11; // x19
  struct ScriptAssetListViewMenu_o *v12; // x21
  ScriptObjectListViewMenu_o *scriptObjectListViewMenu; // x19
  System_String_o *selectAssetPath; // x20
  ScriptObjectListViewMenu_CallbackFunc_o *v15; // x22

  v4 = this;
  if ( (byte_4A589DF & 1) == 0 )
  {
    sub_1B885B0(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ScriptAssetListViewMenu_EndPlayScriptDebug__);
    sub_1B885B0(&Method_ScriptAssetListViewMenu_OnEndSelectObject__);
    this = (ScriptAssetListViewMenu___c__DisplayClass20_0_o *)sub_1B885B0(&ScriptManager_TypeInfo);
    byte_4A589DF = 1;
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
    v12 = v4->fields.__4__this;
    if ( v12 )
    {
      v12->fields.state = 3;
      scriptObjectListViewMenu = v12->fields.scriptObjectListViewMenu;
      selectAssetPath = v12->fields.selectAssetPath;
      v15 = (ScriptObjectListViewMenu_CallbackFunc_o *)sub_1B887FC(ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
      ScriptObjectListViewMenu_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)v12,
        Method_ScriptAssetListViewMenu_OnEndSelectObject__,
        0LL);
      if ( scriptObjectListViewMenu )
      {
        ScriptObjectListViewMenu__Open(scriptObjectListViewMenu, selectAssetPath, v15, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B8880C(this, b);
  }
  startMode = v4->fields.startMode;
  name = v4->fields.name;
  jumpLine = v4->fields.jumpLine;
  v10 = (Il2CppObject *)v4->fields.__4__this;
  labelPath = v4->fields.labelPath;
  v11 = (ScriptManager_CallbackFunc_o *)sub_1B887FC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v11, v10, Method_ScriptAssetListViewMenu_EndPlayScriptDebug__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DebugPlay(startMode, name, labelPath, jumpLine, v11, 0LL);
}