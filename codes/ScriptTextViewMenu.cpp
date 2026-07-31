void ScriptTextViewMenu___ctor(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptTextViewMenu__Callback(
        ScriptTextViewMenu_o *this,
        int32_t result,
        int32_t jumpLine,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ScriptTextViewMenu_CallbackFunc_o *v9; // x21
  struct ScriptTextViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, *(System_String_o **)&jumpLine, (System_String_o *)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      (unsigned int)jumpLine,
      v9->fields.method);
  }
}


void ScriptTextViewMenu__Close(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ScriptTextViewMenu_CallbackFunc_o **p_backupCallbackFunc; // x20
  __int64 v10; // x1
  ListViewManager_o *menuRootObject; // x0

  this->fields.backupCallbackFunc = 0;
  p_backupCallbackFunc = &this->fields.backupCallbackFunc;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.backupCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
  menuRootObject = (ListViewManager_o *)*(p_backupCallbackFunc - 4);
  *((_DWORD *)p_backupCallbackFunc - 4) = 0;
  if ( !menuRootObject
    || (ListViewManager__DestroyList(menuRootObject, 0),
        (menuRootObject = (ListViewManager_o *)this->fields.menuRootObject) == 0) )
  {
    sub_21FFECC(menuRootObject, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)menuRootObject, 0, 0);
}


void ScriptTextViewMenu__OnClickCancel(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 1 )
  {
    this->fields.state = 2;
    ScriptTextViewMenu__Callback(this, 1, -1, v2);
  }
}


void ScriptTextViewMenu__OnClickDecide(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 1 )
  {
    this->fields.state = 2;
    ScriptTextViewMenu__Callback(this, 2, -1, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptTextViewMenu__OnClickItem(
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
        sub_21FFECC(this, *(_QWORD *)&result);
      index = item->fields.index;
      result = 3;
      goto LABEL_5;
    }
    if ( result == 2 )
    {
      index = -1;
      this->fields.state = 2;
LABEL_5:
      ScriptTextViewMenu__Callback(this, result, index, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptTextViewMenu__Open(
        ScriptTextViewMenu_o *this,
        System_String_o *textData,
        int32_t jumpLine,
        ScriptTextViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  UnityEngine_GameObject_o *menuRootObject; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x21
  System_Array_o *v27; // x22
  System_RuntimeFieldHandle_o v28; // x1
  struct System_String_array *v29; // x0
  int32_t v30; // w1
  struct System_String_array **p_textLineData; // x0
  const MethodInfo *v32; // x2
  ScriptTextListViewManager_o *scriptTextListViewManager; // x20
  ScriptTextListViewManager_CallbackFunc_o *v34; // x21
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3

  if ( (byte_5935C40 & 1) == 0 )
  {
    sub_21FFC50(&ScriptTextListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&char___TypeInfo);
    sub_21FFC50(&Method_ScriptTextViewMenu_OnClickItem__);
    sub_21FFC50(&Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_86/*"\r"*/);
    byte_5935C40 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      *(System_String_o **)&jumpLine,
      (System_String_o *)callback,
      (int32_t)method,
      v5,
      v6,
      v7);
    this->fields.backupCallbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.backupCallbackFunc,
      (int32_t)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    menuRootObject = this->fields.menuRootObject;
    if ( !menuRootObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(menuRootObject, 1, 0);
    if ( textData )
    {
      v26 = System_String__Replace_75490096(
              textData,
              (System_String_o *)StringLiteral_86/*"\r"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0);
      v27 = (System_Array_o *)sub_21FFD10(char___TypeInfo, 4);
      v28.fields.value = Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v27, v28, 0);
      if ( !v26 )
        goto LABEL_16;
      v29 = System_String__Split_75492796(v26, (System_Char_array *)v27, 0, 0);
      v30 = (int)v29;
      this->fields.textLineData = v29;
      p_textLineData = &this->fields.textLineData;
    }
    else
    {
      v30 = 0;
      this->fields.textLineData = 0;
      p_textLineData = &this->fields.textLineData;
    }
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_textLineData, v30, v20, v21, v22, v23, v24, v25);
    menuRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTextListViewManager;
    if ( menuRootObject )
    {
      ScriptTextListViewManager__CreateList(
        (ScriptTextListViewManager_o *)menuRootObject,
        this->fields.textLineData,
        v32);
      if ( (jumpLine & 0x80000000) == 0 )
      {
        menuRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTextListViewManager;
        if ( !menuRootObject )
          goto LABEL_16;
        ListViewManager__JumpItem((ListViewManager_o *)menuRootObject, jumpLine, 0);
      }
      menuRootObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      this->fields.state = 1;
      if ( menuRootObject )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)menuRootObject, 1, 0);
        scriptTextListViewManager = this->fields.scriptTextListViewManager;
        v34 = (ScriptTextListViewManager_CallbackFunc_o *)sub_21FFEBC(ScriptTextListViewManager_CallbackFunc_TypeInfo);
        ScriptTextListViewManager_CallbackFunc___ctor(
          v34,
          (Il2CppObject *)this,
          Method_ScriptTextViewMenu_OnClickItem__,
          v35);
        if ( scriptTextListViewManager )
        {
          ScriptTextListViewManager__SetMode_44361408(scriptTextListViewManager, 1, v34, v36);
          return;
        }
      }
    }
LABEL_16:
    sub_21FFECC(menuRootObject, v18);
  }
}


void ScriptTextViewMenu__Reset(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ScriptTextViewMenu_CallbackFunc_o *backupCallbackFunc; // x1
  struct ScriptTextViewMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( this->fields.state )
  {
    backupCallbackFunc = this->fields.backupCallbackFunc;
    this->fields.callbackFunc = backupCallbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)backupCallbackFunc,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    *((_DWORD *)p_callbackFunc - 2) = 1;
  }
}


void ScriptTextViewMenu__add_backupCallbackFunc(
        ScriptTextViewMenu_o *this,
        ScriptTextViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptTextViewMenu_CallbackFunc_o **p_backupCallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptTextViewMenu_CallbackFunc_o *backupCallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptTextViewMenu_o *v13; // x0
  ScriptTextViewMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5935C3E & 1) == 0 )
  {
    sub_21FFC50(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    byte_5935C3E = 1;
  }
  backupCallbackFunc = this->fields.backupCallbackFunc;
  p_backupCallbackFunc = &this->fields.backupCallbackFunc;
  v6 = (System_Delegate_o *)backupCallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptTextViewMenu_CallbackFunc_c *)v8->klass != ScriptTextViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_backupCallbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, ScriptTextViewMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptTextViewMenu__remove_backupCallbackFunc(v13, v14, v15);
}


void ScriptTextViewMenu__add_callbackFunc(
        ScriptTextViewMenu_o *this,
        ScriptTextViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptTextViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptTextViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptTextViewMenu_o *v13; // x0
  ScriptTextViewMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5935C3C & 1) == 0 )
  {
    sub_21FFC50(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    byte_5935C3C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptTextViewMenu_CallbackFunc_c *)v8->klass != ScriptTextViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, ScriptTextViewMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptTextViewMenu__remove_callbackFunc(v13, v14, v15);
}


void ScriptTextViewMenu__remove_backupCallbackFunc(
        ScriptTextViewMenu_o *this,
        ScriptTextViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptTextViewMenu_CallbackFunc_o **p_backupCallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptTextViewMenu_CallbackFunc_o *backupCallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptTextViewMenu_o *v13; // x0
  System_String_o *v14; // x1
  int32_t v15; // w2
  ScriptTextViewMenu_CallbackFunc_o *v16; // x3
  const MethodInfo *v17; // x4

  if ( (byte_5935C3F & 1) == 0 )
  {
    sub_21FFC50(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    byte_5935C3F = 1;
  }
  backupCallbackFunc = this->fields.backupCallbackFunc;
  p_backupCallbackFunc = &this->fields.backupCallbackFunc;
  v6 = (System_Delegate_o *)backupCallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptTextViewMenu_CallbackFunc_c *)v8->klass != ScriptTextViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_backupCallbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, ScriptTextViewMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptTextViewMenu__Open(v13, v14, v15, v16, v17);
}


void ScriptTextViewMenu__remove_callbackFunc(
        ScriptTextViewMenu_o *this,
        ScriptTextViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptTextViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptTextViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptTextViewMenu_o *v13; // x0
  ScriptTextViewMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5935C3D & 1) == 0 )
  {
    sub_21FFC50(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    byte_5935C3D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptTextViewMenu_CallbackFunc_c *)v8->klass != ScriptTextViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, ScriptTextViewMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptTextViewMenu__add_backupCallbackFunc(v13, v14, v15);
}


void ScriptTextViewMenu_CallbackFunc___ctor(
        ScriptTextViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF5D30;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF5CD8;
}


System_IAsyncResult_o *ScriptTextViewMenu_CallbackFunc__BeginInvoke(
        ScriptTextViewMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t jumpLine,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = jumpLine;
  if ( (byte_5935C44 & 1) == 0 )
  {
    sub_21FFC50(&ScriptTextViewMenu_ResultKind_TypeInfo);
    byte_5935C44 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ScriptTextViewMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void ScriptTextViewMenu_CallbackFunc__EndInvoke(
        ScriptTextViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void ScriptTextViewMenu_CallbackFunc__Invoke(
        ScriptTextViewMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t jumpLine,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    jumpLine,
    this->fields.method);
}