void __fastcall ScriptPlayListViewMenu___ctor(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptPlayListViewMenu__Callback(
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
    p_callbackFunc->klass = 0LL;
    sub_1BC2FAC(p_callbackFunc, 0, (int32_t)objectName, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_String_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      objectName,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ScriptPlayListViewMenu__Close(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
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
    ListViewManager__DestroyList(listViewManager, 0LL);
    this->fields.state = 0;
  }
  p_scriptFileList = (CGThumbnailListItem_o *)&this->fields.scriptFileList;
  if ( this->fields.scriptFileList )
  {
    p_scriptFileList->klass = 0LL;
    sub_1BC2FAC(p_scriptFileList, 0, v4, v5);
  }
  listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectRootObject;
  if ( !listViewManager )
LABEL_8:
    sub_1BC3264(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0LL);
}


void __fastcall ScriptPlayListViewMenu__EndInput(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0LL),
          (listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectCancelButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0LL),
          (listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectUpdateButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0LL),
          (listViewManager = (ListViewManager_o *)this->fields.jumpLineObjectInput) == 0LL) )
    {
      sub_1BC3264(listViewManager, method);
    }
    UILineInput__SetInputEnable((UILineInput_o *)listViewManager, 0, 0LL);
  }
}


int32_t __fastcall ScriptPlayListViewMenu__GetJumpLine(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1BC3264(0LL, method);
  Text = UILineInput__GetText(jumpLineObjectInput, 0LL);
  if ( System_String__IsNullOrEmpty(Text, 0LL) )
    return -1;
  else
    return System_Int32__Parse(Text, 0LL);
}


System_String_o *__fastcall ScriptPlayListViewMenu__GetJumpLineString(
        ScriptPlayListViewMenu_o *this,
        const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1BC3264(0LL, method);
  return UILineInput__GetText(jumpLineObjectInput, 0LL);
}


void __fastcall ScriptPlayListViewMenu__OnClickCancel(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.state == 3 )
  {
    this->fields.state = 5;
    ScriptPlayListViewMenu__EndInput(this, method);
    ScriptPlayListViewMenu__Callback(this, 1, 0LL, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptPlayListViewMenu__OnClickErrorDialog(
        ScriptPlayListViewMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  this->fields.state = 5;
  ScriptPlayListViewMenu__EndInput(this, (const MethodInfo *)isDecide);
  ScriptPlayListViewMenu__Callback(this, 1, 0LL, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptPlayListViewMenu__OnClickItem(
        ScriptPlayListViewMenu_o *this,
        int32_t result,
        ScriptPlayListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *path; // x2
  int32_t v10; // w1

  if ( this->fields.state == 3 )
  {
    if ( result == 3 )
    {
      this->fields.state = 5;
      ScriptPlayListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        v10 = 3;
        goto LABEL_9;
      }
LABEL_10:
      sub_1BC3264(v6, v7);
    }
    if ( result == 2 )
    {
      this->fields.state = 5;
      ScriptPlayListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        v10 = (unsigned int)&dword_0 + 2;
LABEL_9:
        ScriptPlayListViewMenu__Callback(this, v10, path, v8);
        return;
      }
      goto LABEL_10;
    }
  }
}


void __fastcall ScriptPlayListViewMenu__OnClickUpdate(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
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
      sub_1BC3264(0LL, v3);
    ListViewManager__DestroyList(listViewManager, 0LL);
    this->fields.scriptFileList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.scriptFileList, 0, v5, v6);
    ScriptPlayListViewMenu__RequestList(this, this->fields.path, v7);
  }
}


void __fastcall ScriptPlayListViewMenu__Open(
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

  if ( (byte_4AFF6C4 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIInput___, path);
    byte_4AFF6C4 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 6:
      goto LABEL_6;
    case 5:
      this->fields.callbackFunc = callback;
      sub_1BC2FAC(
        (CGThumbnailListItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)objectName,
        (const MethodInfo *)jumpLine);
      ScriptPlayListViewMenu__StartInput(this, v21);
      return;
    case 0:
LABEL_6:
      this->fields.path = path;
      sub_1BC2FAC(
        (CGThumbnailListItem_o *)&this->fields.path,
        (int32_t)path,
        (int32_t)objectName,
        (const MethodInfo *)jumpLine);
      this->fields.callbackFunc = callback;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
      scriptTestObjectRootObject = this->fields.scriptTestObjectRootObject;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(scriptTestObjectRootObject, 1, 0LL);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      ListViewManager__set_IsInput((ListViewManager_o *)scriptTestObjectRootObject, 0, 0LL);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestObjectCancelButton;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestObjectRootObject, 0, 0LL);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestObjectUpdateButton;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestObjectRootObject, 0, 0LL);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectRootObject, 0, 0LL);
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
                                                                   0LL);
        v15 = (struct System_String_o *)scriptTestObjectRootObject;
      }
      if ( !scriptTestDefaultNameLabel
        || (UILabel__set_text(scriptTestDefaultNameLabel, v15, 0LL),
            (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput) == 0LL)
        || (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)scriptTestObjectRootObject,
                                                                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL )
      {
LABEL_20:
        sub_1BC3264(scriptTestObjectRootObject, v13);
      }
      UIInput__set_value((UIInput_o *)scriptTestObjectRootObject, jumpLine, 0LL);
      this->fields.state = 1;
      this->fields.scriptFileList = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.scriptFileList, 0, v18, v19);
      ScriptPlayListViewMenu__RequestList(this, this->fields.path, v20);
      break;
  }
}


bool __fastcall ScriptPlayListViewMenu__RequestList(
        ScriptPlayListViewMenu_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_IO_DirectoryInfo_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  System_IO_FileInfo_array *Files_63212100; // x20
  System_Collections_Generic_List_object__o *v21; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int max_length; // w8
  int i; // w23
  System_IO_FileInfo_o *v27; // x0
  System_String_o *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x22
  const MethodInfo *v31; // x3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  struct System_String_array *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  System_String_o *v41; // x20
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v43; // x22
  ScriptPlayListViewManager_o *listViewManager; // x0
  const MethodInfo *v46; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]
  __int16 v48[2]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4AFF6C5 & 1) == 0 )
  {
    sub_1BC3008(&char_TypeInfo, path);
    sub_1BC3008(&ErrorDialog_ClickDelegate_TypeInfo, v5);
    sub_1BC3008(&System_IO_DirectoryInfo_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__ToArray__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1BC3008(&Method_ScriptPlayListViewMenu_OnClickErrorDialog__, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BC3008(&StringLiteral_22076/*"not find directory ["*/, v13);
    sub_1BC3008(&StringLiteral_4620/*"Connect Script Error"*/, v14);
    sub_1BC3008(&StringLiteral_794/*"*.txt"*/, v15);
    sub_1BC3008(&StringLiteral_15911/*"]"*/, v16);
    byte_4AFF6C5 = 1;
  }
  v48[0] = 0;
  if ( System_IO_Directory__Exists(path, 0LL) )
  {
    v17 = (System_IO_DirectoryInfo_o *)sub_1BC3254(System_IO_DirectoryInfo_TypeInfo);
    System_IO_DirectoryInfo___ctor(v17, path, 0LL);
    if ( !v17 )
      sub_1BC3264(v18, v19);
    Files_63212100 = System_IO_DirectoryInfo__GetFiles_63212100(v17, (System_String_o *)StringLiteral_794/*"*.txt"*/, 0LL);
    v21 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v21,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !Files_63212100 )
      sub_1BC3264(v22, v23);
    max_length = Files_63212100->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1BC326C(v22, v23, v24);
        v27 = Files_63212100->m_Items[i];
        if ( !v27 )
          sub_1BC3264(0LL, v23);
        v28 = (System_String_o *)((__int64 (__fastcall *)(System_IO_FileInfo_o *, Il2CppMethodPointer))v27->klass->vtable._9_get_Name.method)(
                                   v27,
                                   v27->klass->vtable._10_get_Exists.methodPtr);
        v30 = v28;
        if ( !v28 )
          sub_1BC3264(0LL, v29);
        v48[0] = System_String__get_Chars(v28, 0, 0LL);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v22 = System_Char__Equals_63411660((uint16_t)v48, 0x2Eu, 0LL);
        if ( !v22 )
        {
          v48[0] = System_String__get_Chars(v30, 0, 0LL);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v22 = System_Char__Equals_63411660((uint16_t)v48, 0x5Fu, 0LL);
          if ( !v22 )
          {
            if ( !v21 )
              sub_1BC3264(v22, v23);
            items = v21->fields._items;
            v33 = Method_System_Collections_Generic_List_string__Add__;
            ++v21->fields._version;
            if ( !items )
              sub_1BC3264(v22, v23);
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                (Il2CppObject *)v30,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              v21->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v30;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v30, v24, v31);
            }
          }
        }
        max_length = Files_63212100->max_length;
      }
    }
    if ( !v21 )
      sub_1BC3264(v22, v23);
    v36 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v21,
                                          (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.scriptFileList = v36;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.scriptFileList, (int32_t)v36, v37, v38);
  }
  else
  {
    v41 = System_String__Concat_62386896(
            (System_String_o *)StringLiteral_22076/*"not find directory ["*/,
            path,
            (System_String_o *)StringLiteral_15911/*"]"*/,
            0LL);
    if ( v41 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v43 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v43,
        (Il2CppObject *)this,
        Method_ScriptPlayListViewMenu_OnClickErrorDialog__,
        0LL);
      if ( Instance )
      {
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_4620/*"Connect Script Error"*/,
          v41,
          v43,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return 0;
      }
LABEL_39:
      sub_1BC3264(listViewManager, v39);
    }
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_39;
  ScriptPlayListViewManager__CreateList(listViewManager, this->fields.scriptFileList, v40);
  ScriptPlayListViewMenu__StartInput(this, v46);
  return 1;
}


void __fastcall ScriptPlayListViewMenu__StartInput(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ScriptPlayListViewManager_o *listViewManager; // x20
  ScriptPlayListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  UnityEngine_Behaviour_o *scriptTestObjectCancelButton; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4AFF6C6 & 1) == 0 )
  {
    sub_1BC3008(&ScriptPlayListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_ScriptPlayListViewMenu_OnClickItem__, v3);
    byte_4AFF6C6 = 1;
  }
  this->fields.state = 3;
  listViewManager = this->fields.listViewManager;
  v5 = (ScriptPlayListViewManager_CallbackFunc_o *)sub_1BC3254(ScriptPlayListViewManager_CallbackFunc_TypeInfo);
  ScriptPlayListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ScriptPlayListViewMenu_OnClickItem__,
    v6);
  if ( !listViewManager
    || (ScriptPlayListViewManager__SetMode_36537816(listViewManager, 1, v5, v9),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectCancelButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0LL),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectUpdateButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0LL),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.jumpLineObjectInput) == 0LL) )
  {
    sub_1BC3264(scriptTestObjectCancelButton, v8);
  }
  UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectCancelButton, 1, 0LL);
}


void __fastcall ScriptPlayListViewMenu__add_callbackFunc(
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

  if ( (byte_4AFF6C2 & 1) == 0 )
  {
    sub_1BC3008(&ScriptPlayListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4AFF6C2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptPlayListViewMenu_CallbackFunc_c *)v8->klass != ScriptPlayListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  ScriptPlayListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptPlayListViewMenu__remove_callbackFunc(
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

  if ( (byte_4AFF6C3 & 1) == 0 )
  {
    sub_1BC3008(&ScriptPlayListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4AFF6C3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptPlayListViewMenu_CallbackFunc_c *)v8->klass != ScriptPlayListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  ScriptPlayListViewMenu__RequestList(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptPlayListViewMenu_CallbackFunc___ctor(
        ScriptPlayListViewMenu_CallbackFunc_o *this,
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0AE14;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0ADBC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptPlayListViewMenu_CallbackFunc__BeginInvoke(
        ScriptPlayListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_4AFF6C7 & 1) == 0 )
  {
    sub_1BC3008(&ScriptPlayListViewMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4AFF6C7 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ScriptPlayListViewMenu_ResultKind_TypeInfo, &v12, objectName, callback, object);
  v11[1] = (__int64)objectName;
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v11, callback, object);
}


void __fastcall ScriptPlayListViewMenu_CallbackFunc__EndInvoke(
        ScriptPlayListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall ScriptPlayListViewMenu_CallbackFunc__Invoke(
        ScriptPlayListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    objectName,
    *(_QWORD *)&this->fields.extra_arg);
}