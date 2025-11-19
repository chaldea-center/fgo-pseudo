void ScriptTextViewMenu___ctor(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptTextViewMenu__Callback(
        ScriptTextViewMenu_o *this,
        int32_t result,
        int32_t jumpLine,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ScriptTextViewMenu_CallbackFunc_o *v5; // x21
  struct ScriptTextViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C6B9AC(p_callbackFunc, 0, jumpLine, method);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      (unsigned int)jumpLine,
      v5->fields.method);
  }
}


void ScriptTextViewMenu__Close(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct ScriptTextViewMenu_CallbackFunc_o **p_backupCallbackFunc; // x20
  __int64 v6; // x1
  ListViewManager_o *menuRootObject; // x0

  this->fields.backupCallbackFunc = 0;
  p_backupCallbackFunc = &this->fields.backupCallbackFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.backupCallbackFunc, 0, v2, v3);
  menuRootObject = (ListViewManager_o *)*(p_backupCallbackFunc - 4);
  *((_DWORD *)p_backupCallbackFunc - 4) = 0;
  if ( !menuRootObject
    || (ListViewManager__DestroyList(menuRootObject, 0),
        (menuRootObject = (ListViewManager_o *)this->fields.menuRootObject) == 0) )
  {
    sub_1C6BC60(menuRootObject, v6);
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
        sub_1C6BC60(this, result);
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


void ScriptTextViewMenu__Open(
        ScriptTextViewMenu_o *this,
        System_String_o *textData,
        int32_t jumpLine,
        ScriptTextViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *menuRootObject; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_String_o *v15; // x21
  System_Array_o *v16; // x22
  System_RuntimeFieldHandle_o v17; // x1
  struct System_String_array *v18; // x0
  int32_t v19; // w1
  struct System_String_array **p_textLineData; // x0
  const MethodInfo *v21; // x2
  ScriptTextListViewManager_o *scriptTextListViewManager; // x20
  ScriptTextListViewManager_CallbackFunc_o *v23; // x21
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3

  if ( (byte_4CB38F7 & 1) == 0 )
  {
    sub_1C6BA08(&ScriptTextListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&char___TypeInfo);
    sub_1C6BA08(&Method_ScriptTextViewMenu_OnClickItem__);
    sub_1C6BA08(&Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_86/*"\r"*/);
    byte_4CB38F7 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      jumpLine,
      (const MethodInfo *)callback);
    this->fields.backupCallbackFunc = callback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.backupCallbackFunc, (int32_t)callback, v9, v10);
    menuRootObject = this->fields.menuRootObject;
    if ( !menuRootObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(menuRootObject, 1, 0);
    if ( textData )
    {
      v15 = System_String__Replace_64013356(
              textData,
              (System_String_o *)StringLiteral_86/*"\r"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0);
      v16 = (System_Array_o *)sub_1C6BAB0(char___TypeInfo, 4);
      v17.fields.value = Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v16, v17, 0);
      if ( !v15 )
        goto LABEL_16;
      v18 = System_String__Split_64016000(v15, (System_Char_array *)v16, 0, 0);
      v19 = (int)v18;
      this->fields.textLineData = v18;
      p_textLineData = &this->fields.textLineData;
    }
    else
    {
      this->fields.textLineData = 0;
      p_textLineData = &this->fields.textLineData;
      v19 = 0;
    }
    sub_1C6B9AC((CGThumbnailListItem_o *)p_textLineData, v19, v13, v14);
    menuRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTextListViewManager;
    if ( menuRootObject )
    {
      ScriptTextListViewManager__CreateList(
        (ScriptTextListViewManager_o *)menuRootObject,
        this->fields.textLineData,
        v21);
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
        v23 = (ScriptTextListViewManager_CallbackFunc_o *)sub_1C6BC54(ScriptTextListViewManager_CallbackFunc_TypeInfo);
        ScriptTextListViewManager_CallbackFunc___ctor(
          v23,
          (Il2CppObject *)this,
          Method_ScriptTextViewMenu_OnClickItem__,
          v24);
        if ( scriptTextListViewManager )
        {
          ScriptTextListViewManager__SetMode_37702888(scriptTextListViewManager, 1, v23, v25);
          return;
        }
      }
    }
LABEL_16:
    sub_1C6BC60(menuRootObject, v11);
  }
}


void ScriptTextViewMenu__Reset(ScriptTextViewMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct ScriptTextViewMenu_CallbackFunc_o *backupCallbackFunc; // x1
  struct ScriptTextViewMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( this->fields.state )
  {
    backupCallbackFunc = this->fields.backupCallbackFunc;
    this->fields.callbackFunc = backupCallbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)backupCallbackFunc, v2, v3);
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
  __int64 v9; // x0
  bool v10; // zf
  ScriptTextViewMenu_o *v11; // x0
  ScriptTextViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB38F5 & 1) == 0 )
  {
    sub_1C6BA08(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    byte_4CB38F5 = 1;
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
    v9 = sub_1CC77DC(p_backupCallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  ScriptTextViewMenu__remove_backupCallbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  ScriptTextViewMenu_o *v11; // x0
  ScriptTextViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB38F3 & 1) == 0 )
  {
    sub_1C6BA08(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    byte_4CB38F3 = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  ScriptTextViewMenu__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  ScriptTextViewMenu_o *v11; // x0
  System_String_o *v12; // x1
  int32_t v13; // w2
  ScriptTextViewMenu_CallbackFunc_o *v14; // x3
  const MethodInfo *v15; // x4

  if ( (byte_4CB38F6 & 1) == 0 )
  {
    sub_1C6BA08(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    byte_4CB38F6 = 1;
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
    v9 = sub_1CC77DC(p_backupCallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  ScriptTextViewMenu__Open(v11, v12, v13, v14, v15);
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
  __int64 v9; // x0
  bool v10; // zf
  ScriptTextViewMenu_o *v11; // x0
  ScriptTextViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB38F4 & 1) == 0 )
  {
    sub_1C6BA08(&ScriptTextViewMenu_CallbackFunc_TypeInfo);
    byte_4CB38F4 = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  ScriptTextViewMenu__add_backupCallbackFunc(v11, v12, v13);
}


void ScriptTextViewMenu_CallbackFunc___ctor(
        ScriptTextViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9F174;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9F11C;
}


System_IAsyncResult_o *ScriptTextViewMenu_CallbackFunc__BeginInvoke(
        ScriptTextViewMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t jumpLine,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = jumpLine;
  v12 = result;
  if ( (byte_4CB38F8 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&ScriptTextViewMenu_ResultKind_TypeInfo);
    byte_4CB38F8 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ScriptTextViewMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v10, callback, object);
}


void ScriptTextViewMenu_CallbackFunc__EndInvoke(
        ScriptTextViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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