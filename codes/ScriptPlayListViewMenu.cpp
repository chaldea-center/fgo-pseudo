void ScriptPlayListViewMenu___ctor(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptPlayListViewMenu__Callback(
        ScriptPlayListViewMenu_o *this,
        int32_t result,
        System_String_o *objectName,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ScriptPlayListViewMenu_CallbackFunc_o *v5; // x21
  struct ScriptPlayListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)objectName, method);
    ((void (__fastcall *)(intptr_t, _QWORD, System_String_o *, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      objectName,
      v5->fields.method);
  }
}


void ScriptPlayListViewMenu__Close(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  ListViewManager_o *listViewManager; // x0
  CGThumbnailListItem_o *p_scriptFileList; // x0

  ScriptPlayListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.state = 0;
  }
  p_scriptFileList = (CGThumbnailListItem_o *)&this->fields.scriptFileList;
  if ( this->fields.scriptFileList )
  {
    p_scriptFileList->klass = 0;
    sub_1C2D434(p_scriptFileList, 0, v4, v5);
  }
  listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectRootObject;
  if ( !listViewManager )
LABEL_8:
    sub_1C2D6EC(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void ScriptPlayListViewMenu__EndInput(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectCancelButton) == 0)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectUpdateButton) == 0)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.jumpLineObjectInput) == 0) )
    {
      sub_1C2D6EC(listViewManager, method);
    }
    UILineInput__SetInputEnable((UILineInput_o *)listViewManager, 0, 0);
  }
}


int32_t ScriptPlayListViewMenu__GetJumpLine(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1C2D6EC(0, method);
  Text = UILineInput__GetText(jumpLineObjectInput, 0);
  if ( System_String__IsNullOrEmpty(Text, 0) )
    return -1;
  else
    return System_Int32__Parse(Text, 0);
}


System_String_o *ScriptPlayListViewMenu__GetJumpLineString(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1C2D6EC(0, method);
  return UILineInput__GetText(jumpLineObjectInput, 0);
}


void ScriptPlayListViewMenu__OnClickCancel(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.state == 3 )
  {
    this->fields.state = 5;
    ScriptPlayListViewMenu__EndInput(this, method);
    ScriptPlayListViewMenu__Callback(this, 1, 0, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptPlayListViewMenu__OnClickErrorDialog(
        ScriptPlayListViewMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  this->fields.state = 5;
  ScriptPlayListViewMenu__EndInput(this, (const MethodInfo *)isDecide);
  ScriptPlayListViewMenu__Callback(this, 1, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void ScriptPlayListViewMenu__OnClickItem(
        ScriptPlayListViewMenu_o *this,
        int32_t result,
        ScriptPlayListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *path; // x2
  char *v10; // x1

  if ( this->fields.state == 3 )
  {
    if ( result == 3 )
    {
      this->fields.state = 5;
      ScriptPlayListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        LODWORD(v10) = 3;
        goto LABEL_9;
      }
LABEL_10:
      sub_1C2D6EC(v6, v7);
    }
    if ( result == 2 )
    {
      this->fields.state = 5;
      ScriptPlayListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        v10 = (char *)&dword_0 + 2;
LABEL_9:
        ScriptPlayListViewMenu__Callback(this, (int32_t)v10, path, v8);
        return;
      }
      goto LABEL_10;
    }
  }
}


void ScriptPlayListViewMenu__OnClickUpdate(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( this->fields.state == 3 )
  {
    this->fields.state = 1;
    ScriptPlayListViewMenu__EndInput(this, method);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_1C2D6EC(0, v3);
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.scriptFileList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.scriptFileList, 0, v5, v6);
    ScriptPlayListViewMenu__RequestList(this, this->fields.path, v7);
  }
}


void ScriptPlayListViewMenu__Open(
        ScriptPlayListViewMenu_o *this,
        System_String_o *path,
        System_String_o *objectName,
        System_String_o *jumpLine,
        ScriptPlayListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t state; // w8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  UnityEngine_GameObject_o *scriptTestObjectRootObject; // x0
  struct System_String_o *v15; // x8
  int stringLength; // w9
  UILabel_o *scriptTestDefaultNameLabel; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1

  if ( (byte_4C2491E & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIInput___);
    byte_4C2491E = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 6:
      goto LABEL_6;
    case 5:
      this->fields.callbackFunc = callback;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)objectName,
        (const MethodInfo *)jumpLine);
      ScriptPlayListViewMenu__StartInput(this, v21);
      return;
    case 0:
LABEL_6:
      this->fields.path = path;
      sub_1C2D434(
        (CGThumbnailListItem_o *)&this->fields.path,
        (int32_t)path,
        (int32_t)objectName,
        (const MethodInfo *)jumpLine);
      this->fields.callbackFunc = callback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
      scriptTestObjectRootObject = this->fields.scriptTestObjectRootObject;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(scriptTestObjectRootObject, 1, 0);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      ListViewManager__set_IsInput((ListViewManager_o *)scriptTestObjectRootObject, 0, 0);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestObjectCancelButton;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestObjectRootObject, 0, 0);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestObjectUpdateButton;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestObjectRootObject, 0, 0);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectRootObject, 0, 0);
      v15 = this->fields.path;
      if ( !v15 )
        goto LABEL_20;
      stringLength = v15->fields._stringLength;
      scriptTestDefaultNameLabel = this->fields.scriptTestDefaultNameLabel;
      if ( stringLength >= 31 )
      {
        scriptTestObjectRootObject = (UnityEngine_GameObject_o *)System_String__Substring(
                                                                   this->fields.path,
                                                                   stringLength - 30,
                                                                   0);
        v15 = (struct System_String_o *)scriptTestObjectRootObject;
      }
      if ( !scriptTestDefaultNameLabel
        || (UILabel__set_text(scriptTestDefaultNameLabel, v15, 0),
            (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput) == 0)
        || (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)scriptTestObjectRootObject,
                                                                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0 )
      {
LABEL_20:
        sub_1C2D6EC(scriptTestObjectRootObject, v13);
      }
      UIInput__set_value((UIInput_o *)scriptTestObjectRootObject, jumpLine, 0);
      this->fields.state = 1;
      this->fields.scriptFileList = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.scriptFileList, 0, v18, v19);
      ScriptPlayListViewMenu__RequestList(this, this->fields.path, v20);
      break;
  }
}


bool ScriptPlayListViewMenu__RequestList(
        ScriptPlayListViewMenu_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_IO_DirectoryInfo_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_IO_FileInfo_array *Files_64323032; // x20
  System_Collections_Generic_List_object__o *v9; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  int i; // w23
  System_IO_FileInfo_o *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x22
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct System_String_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  System_String_o *v29; // x20
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v31; // x22
  ScriptPlayListViewManager_o *listViewManager; // x0
  const MethodInfo *v34; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]
  _WORD v36[2]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C2491F & 1) == 0 )
  {
    sub_1C2D490(&char_TypeInfo);
    sub_1C2D490(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&System_IO_DirectoryInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&Method_ScriptPlayListViewMenu_OnClickErrorDialog__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_22274/*"not find directory ["*/);
    sub_1C2D490(&StringLiteral_4652/*"Connect Script Error"*/);
    sub_1C2D490(&StringLiteral_799/*"*.txt"*/);
    sub_1C2D490(&StringLiteral_16055/*"]"*/);
    byte_4C2491F = 1;
  }
  v36[0] = 0;
  if ( System_IO_Directory__Exists(path, 0) )
  {
    v5 = (System_IO_DirectoryInfo_o *)sub_1C2D6DC(System_IO_DirectoryInfo_TypeInfo);
    System_IO_DirectoryInfo___ctor(v5, path, 0);
    if ( !v5 )
      sub_1C2D6EC(v6, v7);
    Files_64323032 = System_IO_DirectoryInfo__GetFiles_64323032(v5, (System_String_o *)StringLiteral_799/*"*.txt"*/, 0);
    v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !Files_64323032 )
      sub_1C2D6EC(v10, v11);
    max_length = Files_64323032->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C2D6F4(v10, v11, v12);
        v15 = Files_64323032->m_Items[i];
        if ( !v15 )
          sub_1C2D6EC(0, v11);
        v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_FileInfo_o *, const MethodInfo *))v15->klass->vtable._9_get_Name.methodPtr)(
                                   v15,
                                   v15->klass->vtable._9_get_Name.method);
        v18 = v16;
        if ( !v16 )
          sub_1C2D6EC(0, v17);
        v36[0] = System_String__get_Chars(v16, 0, 0);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v10 = System_Char__Equals_64523020((uint16_t)v36, 0x2Eu, 0);
        if ( !v10 )
        {
          v36[0] = System_String__get_Chars(v18, 0, 0);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v10 = System_Char__Equals_64523020((uint16_t)v36, 0x5Fu, 0);
          if ( !v10 )
          {
            if ( !v9 )
              sub_1C2D6EC(v10, v11);
            items = v9->fields._items;
            v21 = Method_System_Collections_Generic_List_string__Add__;
            ++v9->fields._version;
            if ( !items )
              sub_1C2D6EC(v10, v11);
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v18,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v18;
              sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v18, v12, v19);
            }
          }
        }
        max_length = Files_64323032->max_length;
      }
    }
    if ( !v9 )
      sub_1C2D6EC(v10, v11);
    v24 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v9,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.scriptFileList = v24;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.scriptFileList, (int32_t)v24, v25, v26);
  }
  else
  {
    v29 = System_String__Concat_63496112(
            (System_String_o *)StringLiteral_22274/*"not find directory ["*/,
            path,
            (System_String_o *)StringLiteral_16055/*"]"*/,
            0);
    if ( v29 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v31 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v31, (Il2CppObject *)this, Method_ScriptPlayListViewMenu_OnClickErrorDialog__, 0);
      if ( Instance )
      {
        *(_QWORD *)&effectDistance.fields.hasValue = 0;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_4652/*"Connect Script Error"*/,
          v29,
          v31,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0);
        return 0;
      }
LABEL_39:
      sub_1C2D6EC(listViewManager, v27);
    }
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_39;
  ScriptPlayListViewManager__CreateList(listViewManager, this->fields.scriptFileList, v28);
  ScriptPlayListViewMenu__StartInput(this, v34);
  return 1;
}


void ScriptPlayListViewMenu__StartInput(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  ScriptPlayListViewManager_o *listViewManager; // x20
  ScriptPlayListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  UnityEngine_Behaviour_o *scriptTestObjectCancelButton; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4C24920 & 1) == 0 )
  {
    sub_1C2D490(&ScriptPlayListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ScriptPlayListViewMenu_OnClickItem__);
    byte_4C24920 = 1;
  }
  this->fields.state = 3;
  listViewManager = this->fields.listViewManager;
  v4 = (ScriptPlayListViewManager_CallbackFunc_o *)sub_1C2D6DC(ScriptPlayListViewManager_CallbackFunc_TypeInfo);
  ScriptPlayListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ScriptPlayListViewMenu_OnClickItem__,
    v5);
  if ( !listViewManager
    || (ScriptPlayListViewManager__SetMode_37255508(listViewManager, 1, v4, v8),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectCancelButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectUpdateButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.jumpLineObjectInput) == 0) )
  {
    sub_1C2D6EC(scriptTestObjectCancelButton, v7);
  }
  UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectCancelButton, 1, 0);
}


void ScriptPlayListViewMenu__add_callbackFunc(
        ScriptPlayListViewMenu_o *this,
        ScriptPlayListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptPlayListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptPlayListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptPlayListViewMenu_o *v11; // x0
  ScriptPlayListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C2491C & 1) == 0 )
  {
    sub_1C2D490(&ScriptPlayListViewMenu_CallbackFunc_TypeInfo);
    byte_4C2491C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptPlayListViewMenu_CallbackFunc_c *)v8->klass != ScriptPlayListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  ScriptPlayListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void ScriptPlayListViewMenu__remove_callbackFunc(
        ScriptPlayListViewMenu_o *this,
        ScriptPlayListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptPlayListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptPlayListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptPlayListViewMenu_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C2491D & 1) == 0 )
  {
    sub_1C2D490(&ScriptPlayListViewMenu_CallbackFunc_TypeInfo);
    byte_4C2491D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptPlayListViewMenu_CallbackFunc_c *)v8->klass != ScriptPlayListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  ScriptPlayListViewMenu__RequestList(v11, v12, v13);
}


void ScriptPlayListViewMenu_CallbackFunc___ctor(
        ScriptPlayListViewMenu_CallbackFunc_o *this,
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6F5AC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6F554;
}


System_IAsyncResult_o *ScriptPlayListViewMenu_CallbackFunc__BeginInvoke(
        ScriptPlayListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_4C24921 & 1) == 0 )
  {
    sub_1C2D490(&ScriptPlayListViewMenu_ResultKind_TypeInfo);
    byte_4C24921 = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(ScriptPlayListViewMenu_ResultKind_TypeInfo, &v12, objectName, callback, object);
  v11[1] = objectName;
  return (System_IAsyncResult_o *)sub_1C2D444(this, v11, callback, object);
}


void ScriptPlayListViewMenu_CallbackFunc__EndInvoke(
        ScriptPlayListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void ScriptPlayListViewMenu_CallbackFunc__Invoke(
        ScriptPlayListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    objectName,
    this->fields.method);
}