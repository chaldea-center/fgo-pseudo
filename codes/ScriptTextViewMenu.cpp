void __fastcall ScriptTextViewMenu___ctor(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptTextViewMenu__Callback(
        ScriptTextViewMenu_o *this,
        int32_t result,
        int32_t jumpLine,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ScriptTextViewMenu_CallbackFunc_o *v9; // x21
  struct ScriptTextViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, *(int64_t *)&jumpLine, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      (unsigned int)jumpLine,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ScriptTextViewMenu__Close(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ScriptTextViewMenu_CallbackFunc_o **p_backupCallbackFunc; // x20
  __int64 v10; // x1
  ListViewManager_o *menuRootObject; // x0

  this->fields.backupCallbackFunc = 0LL;
  p_backupCallbackFunc = &this->fields.backupCallbackFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.backupCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  menuRootObject = (ListViewManager_o *)*(p_backupCallbackFunc - 4);
  *((_DWORD *)p_backupCallbackFunc - 4) = 0;
  if ( !menuRootObject
    || (ListViewManager__DestroyList(menuRootObject, 0LL),
        (menuRootObject = (ListViewManager_o *)this->fields.menuRootObject) == 0LL) )
  {
    sub_1BCAA3C(menuRootObject, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)menuRootObject, 0, 0LL);
}


void __fastcall ScriptTextViewMenu__OnClickCancel(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 1 )
  {
    this->fields.state = 2;
    ScriptTextViewMenu__Callback(this, 1, -1, v2);
  }
}


void __fastcall ScriptTextViewMenu__OnClickDecide(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 1 )
  {
    this->fields.state = 2;
    ScriptTextViewMenu__Callback(this, 2, -1, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptTextViewMenu__OnClickItem(
        ScriptTextViewMenu_o *this,
        int32_t result,
        ScriptTextListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t index; // w2

  if ( this->fields.state == 1 )
  {
    if ( result == 3 )
    {
      this->fields.state = 2;
      if ( !item )
        sub_1BCAA3C(this, *(_QWORD *)&result);
      index = item->fields.index;
      result = 3;
      goto LABEL_8;
    }
    if ( result == 2 )
    {
      index = -1;
      this->fields.state = 2;
LABEL_8:
      ScriptTextViewMenu__Callback(this, result, index, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptTextViewMenu__Open(
        ScriptTextViewMenu_o *this,
        System_String_o *textData,
        int32_t jumpLine,
        ScriptTextViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  UnityEngine_GameObject_o *menuRootObject; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_String_o *v36; // x21
  System_Array_o *v37; // x22
  struct System_String_array *v38; // x1
  struct System_String_array **p_textLineData; // x0
  const MethodInfo *v40; // x2
  ScriptTextListViewManager_o *scriptTextListViewManager; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  ScriptTextListViewManager_CallbackFunc_o *v45; // x21
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  System_RuntimeFieldHandle_o v48; // 0:w1.4

  if ( (byte_4B13A10 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptTextListViewManager_CallbackFunc_TypeInfo, textData, *(_QWORD *)&jumpLine);
    sub_1BCA7E0(&char___TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_ScriptTextViewMenu_OnClickItem__, v14, v15);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3,
      v16,
      v17);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_87/*"\r"*/, v20, v21);
    byte_4B13A10 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      *(int64_t *)&jumpLine,
      (int32_t)callback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    this->fields.backupCallbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.backupCallbackFunc,
      (int64_t)callback,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    menuRootObject = this->fields.menuRootObject;
    if ( !menuRootObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(menuRootObject, 1, 0LL);
    if ( textData )
    {
      v36 = System_String__Replace_62420848(
              textData,
              (System_String_o *)StringLiteral_87/*"\r"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v37 = (System_Array_o *)sub_1BCA888(char___TypeInfo, 4LL);
      v48.fields.value = Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v37, v48, 0LL);
      if ( !v36 )
        goto LABEL_16;
      v38 = System_String__Split_62423612(v36, (System_Char_array *)v37, 0, 0LL);
      this->fields.textLineData = v38;
      p_textLineData = &this->fields.textLineData;
    }
    else
    {
      this->fields.textLineData = 0LL;
      p_textLineData = &this->fields.textLineData;
      v38 = 0LL;
    }
    sub_1BCA784((PartyOrganizationUtility_o *)p_textLineData, (int64_t)v38, v30, v31, v32, v33, v34, v35);
    menuRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTextListViewManager;
    if ( menuRootObject )
    {
      ScriptTextListViewManager__CreateList(
        (ScriptTextListViewManager_o *)menuRootObject,
        this->fields.textLineData,
        v40);
      if ( (jumpLine & 0x80000000) == 0 )
      {
        menuRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTextListViewManager;
        if ( !menuRootObject )
          goto LABEL_16;
        ListViewManager__JumpItem((ListViewManager_o *)menuRootObject, jumpLine, 0LL);
      }
      menuRootObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      this->fields.state = 1;
      if ( menuRootObject )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)menuRootObject, 1, 0LL);
        scriptTextListViewManager = this->fields.scriptTextListViewManager;
        v45 = (ScriptTextListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                            ScriptTextListViewManager_CallbackFunc_TypeInfo,
                                                            v42,
                                                            v43,
                                                            v44);
        ScriptTextListViewManager_CallbackFunc___ctor(
          v45,
          (Il2CppObject *)this,
          Method_ScriptTextViewMenu_OnClickItem__,
          v46);
        if ( scriptTextListViewManager )
        {
          ScriptTextListViewManager__SetMode_35581688(scriptTextListViewManager, 1, v45, v47);
          return;
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(menuRootObject, v28);
  }
}


void __fastcall ScriptTextViewMenu__Reset(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ScriptTextViewMenu_CallbackFunc_o *backupCallbackFunc; // x1
  struct ScriptTextViewMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( this->fields.state )
  {
    backupCallbackFunc = this->fields.backupCallbackFunc;
    this->fields.callbackFunc = backupCallbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)backupCallbackFunc,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    *((_DWORD *)p_callbackFunc - 2) = 1;
  }
}


void __fastcall ScriptTextViewMenu__add_backupCallbackFunc(
        ScriptTextViewMenu_o *this,
        ScriptTextViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptTextViewMenu_CallbackFunc_o **p_backupCallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptTextViewMenu_CallbackFunc_o *backupCallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptTextViewMenu_o *v11; // x0
  ScriptTextViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B13A0E & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptTextViewMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13A0E = 1;
  }
  backupCallbackFunc = this->fields.backupCallbackFunc;
  p_backupCallbackFunc = &this->fields.backupCallbackFunc;
  v6 = (System_Delegate_o *)backupCallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptTextViewMenu_CallbackFunc_c *)v8->klass != ScriptTextViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_backupCallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  ScriptTextViewMenu__remove_backupCallbackFunc(v11, v12, v13);
}


void __fastcall ScriptTextViewMenu__add_callbackFunc(
        ScriptTextViewMenu_o *this,
        ScriptTextViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptTextViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptTextViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptTextViewMenu_o *v11; // x0
  ScriptTextViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B13A0C & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptTextViewMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13A0C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptTextViewMenu_CallbackFunc_c *)v8->klass != ScriptTextViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  ScriptTextViewMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptTextViewMenu__remove_backupCallbackFunc(
        ScriptTextViewMenu_o *this,
        ScriptTextViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptTextViewMenu_CallbackFunc_o **p_backupCallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptTextViewMenu_CallbackFunc_o *backupCallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptTextViewMenu_o *v11; // x0
  System_String_o *v12; // x1
  int32_t v13; // w2
  ScriptTextViewMenu_CallbackFunc_o *v14; // x3
  const MethodInfo *v15; // x4

  if ( (byte_4B13A0F & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptTextViewMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13A0F = 1;
  }
  backupCallbackFunc = this->fields.backupCallbackFunc;
  p_backupCallbackFunc = &this->fields.backupCallbackFunc;
  v6 = (System_Delegate_o *)backupCallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptTextViewMenu_CallbackFunc_c *)v8->klass != ScriptTextViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_backupCallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  ScriptTextViewMenu__Open(v11, v12, v13, v14, v15);
}


void __fastcall ScriptTextViewMenu__remove_callbackFunc(
        ScriptTextViewMenu_o *this,
        ScriptTextViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptTextViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptTextViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptTextViewMenu_o *v11; // x0
  ScriptTextViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B13A0D & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptTextViewMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13A0D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptTextViewMenu_CallbackFunc_c *)v8->klass != ScriptTextViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  ScriptTextViewMenu__add_backupCallbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptTextViewMenu_CallbackFunc___ctor(
        ScriptTextViewMenu_CallbackFunc_o *this,
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
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0A680;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0A628;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptTextViewMenu_CallbackFunc__BeginInvoke(
        ScriptTextViewMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t jumpLine,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = jumpLine;
  v14 = result;
  if ( (byte_4B13A11 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&jumpLine);
    sub_1BCA7E0(&ScriptTextViewMenu_ResultKind_TypeInfo, v9, v10);
    byte_4B13A11 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(ScriptTextViewMenu_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall ScriptTextViewMenu_CallbackFunc__EndInvoke(
        ScriptTextViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ScriptTextViewMenu_CallbackFunc__Invoke(
        ScriptTextViewMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t jumpLine,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    jumpLine,
    *(_QWORD *)&this->fields.extra_arg);
}