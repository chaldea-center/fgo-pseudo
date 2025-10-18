void ScriptConnectListViewMenu___ctor(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptConnectListViewMenu__Callback(
        ScriptConnectListViewMenu_o *this,
        int32_t result,
        System_String_o *objectName,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ScriptConnectListViewMenu_CallbackFunc_o *v5; // x21
  struct ScriptConnectListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, (int32_t)objectName, method);
    ((void (__fastcall *)(intptr_t, _QWORD, System_String_o *, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      objectName,
      v5->fields.method);
  }
}


void ScriptConnectListViewMenu__Close(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  ListViewManager_o *listViewManager; // x0
  CGThumbnailListItem_o *p_scriptFileList; // x0

  ScriptConnectListViewMenu__EndInput(this, method);
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
    sub_1C36FFC(p_scriptFileList, 0, v3, v4);
  }
  listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectRootObject;
  if ( !listViewManager )
LABEL_8:
    sub_1C372B4(listViewManager);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void ScriptConnectListViewMenu__EndInput(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
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
      sub_1C372B4(listViewManager);
    }
    UILineInput__SetInputEnable((UILineInput_o *)listViewManager, 0, 0);
  }
}


int32_t ScriptConnectListViewMenu__GetJumpLine(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1C372B4(0);
  Text = UILineInput__GetText(jumpLineObjectInput, 0);
  if ( System_String__IsNullOrEmpty(Text, 0) )
    return -1;
  else
    return System_Int32__Parse(Text, 0);
}


System_String_o *ScriptConnectListViewMenu__GetJumpLineString(
        ScriptConnectListViewMenu_o *this,
        const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1C372B4(0);
  return UILineInput__GetText(jumpLineObjectInput, 0);
}


void ScriptConnectListViewMenu__OnClickCancel(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.state == 3 )
  {
    this->fields.state = 5;
    ScriptConnectListViewMenu__EndInput(this, method);
    ScriptConnectListViewMenu__Callback(this, 1, 0, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptConnectListViewMenu__OnClickErrorDialog(
        ScriptConnectListViewMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  this->fields.state = 5;
  ScriptConnectListViewMenu__EndInput(this, (const MethodInfo *)isDecide);
  ScriptConnectListViewMenu__Callback(this, 1, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void ScriptConnectListViewMenu__OnClickItem(
        ScriptConnectListViewMenu_o *this,
        int32_t result,
        ScriptConnectListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x0
  const MethodInfo *v7; // x3
  System_String_o *path; // x2
  char *v9; // x1

  if ( this->fields.state == 3 )
  {
    if ( result == 3 )
    {
      this->fields.state = 5;
      ScriptConnectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        LODWORD(v9) = 3;
        goto LABEL_9;
      }
LABEL_10:
      sub_1C372B4(v6);
    }
    if ( result == 2 )
    {
      this->fields.state = 5;
      ScriptConnectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        v9 = (char *)&dword_0 + 2;
LABEL_9:
        ScriptConnectListViewMenu__Callback(this, (int32_t)v9, path, v7);
        return;
      }
      goto LABEL_10;
    }
  }
}


void ScriptConnectListViewMenu__OnClickUpdate(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( this->fields.state == 3 )
  {
    this->fields.state = 1;
    ScriptConnectListViewMenu__EndInput(this, method);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_1C372B4(0);
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.scriptFileList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.scriptFileList, 0, v4, v5);
    ScriptConnectListViewMenu__RequestList(this, this->fields.path, v6);
  }
}


void ScriptConnectListViewMenu__Open(
        ScriptConnectListViewMenu_o *this,
        System_String_o *path,
        System_String_o *objectName,
        System_String_o *jumpLine,
        ScriptConnectListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t state; // w8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *scriptTestObjectRootObject; // x0
  struct System_String_o *v14; // x8
  int stringLength; // w9
  UILabel_o *scriptTestDefaultNameLabel; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1

  if ( (byte_4C4057C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIInput___);
    byte_4C4057C = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 6:
      goto LABEL_6;
    case 5:
      this->fields.callbackFunc = callback;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)objectName,
        (const MethodInfo *)jumpLine);
      ScriptConnectListViewMenu__StartInput(this, v20);
      return;
    case 0:
LABEL_6:
      this->fields.path = path;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&this->fields.path,
        (int32_t)path,
        (int32_t)objectName,
        (const MethodInfo *)jumpLine);
      this->fields.callbackFunc = callback;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
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
      v14 = this->fields.path;
      if ( !v14 )
        goto LABEL_20;
      stringLength = v14->fields._stringLength;
      scriptTestDefaultNameLabel = this->fields.scriptTestDefaultNameLabel;
      if ( stringLength >= 31 )
      {
        scriptTestObjectRootObject = (UnityEngine_GameObject_o *)System_String__Substring(
                                                                   this->fields.path,
                                                                   stringLength - 30,
                                                                   0);
        v14 = (struct System_String_o *)scriptTestObjectRootObject;
      }
      if ( !scriptTestDefaultNameLabel
        || (UILabel__set_text(scriptTestDefaultNameLabel, v14, 0),
            (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput) == 0)
        || (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)scriptTestObjectRootObject,
                                                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0 )
      {
LABEL_20:
        sub_1C372B4(scriptTestObjectRootObject);
      }
      UIInput__set_value((UIInput_o *)scriptTestObjectRootObject, jumpLine, 0);
      this->fields.state = 1;
      this->fields.scriptFileList = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.scriptFileList, 0, v17, v18);
      ScriptConnectListViewMenu__RequestList(this, this->fields.path, v19);
      break;
  }
}


bool ScriptConnectListViewMenu__RequestList(
        ScriptConnectListViewMenu_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  bool IsNullOrEmpty; // w8
  System_String_o *listViewManager; // x0
  System_String_o *v8; // x21
  System_IO_DirectoryInfo_o *v9; // x22
  __int64 v10; // x0
  System_IO_FileInfo_array *Files_64426080; // x21
  System_Collections_Generic_List_object__o *v12; // x22
  _BOOL8 v13; // x0
  int max_length; // w8
  int i; // w24
  System_IO_FileInfo_o *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct System_String_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v31; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  _WORD v34[2]; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4C4057D & 1) == 0 )
  {
    sub_1C37058(&char_TypeInfo);
    sub_1C37058(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&System_IO_DirectoryInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&Method_ScriptConnectListViewMenu_OnClickErrorDialog__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_19439/*"file://"*/);
    sub_1C37058(&StringLiteral_22294/*"not find directory ["*/);
    sub_1C37058(&StringLiteral_4660/*"Connect Script Error"*/);
    sub_1C37058(&StringLiteral_19440/*"file:///"*/);
    sub_1C37058(&StringLiteral_799/*"*.txt"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C4057D = 1;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v34[0] = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0);
  listViewManager = 0;
  if ( !IsNullOrEmpty )
  {
    if ( path )
    {
      listViewManager = System_String__Replace_63608204(
                          path,
                          (System_String_o *)StringLiteral_19440/*"file:///"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0);
      if ( listViewManager )
      {
        v8 = System_String__Replace_63608204(
               listViewManager,
               (System_String_o *)StringLiteral_19439/*"file://"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( System_IO_Directory__Exists(v8, 0) )
        {
          v9 = (System_IO_DirectoryInfo_o *)sub_1C372A4(System_IO_DirectoryInfo_TypeInfo);
          System_IO_DirectoryInfo___ctor(v9, v8, 0);
          if ( !v9 )
            sub_1C372B4(v10);
          Files_64426080 = System_IO_DirectoryInfo__GetFiles_64426080(v9, (System_String_o *)StringLiteral_799/*"*.txt"*/, 0);
          v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v12,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !Files_64426080 )
            sub_1C372B4(v13);
          max_length = Files_64426080->max_length;
          if ( max_length >= 1 )
          {
            for ( i = 0; i < max_length; ++i )
            {
              if ( i >= (unsigned int)max_length )
                sub_1C372BC(v13);
              v16 = Files_64426080->m_Items[i];
              if ( !v16 )
                sub_1C372B4(0);
              v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_FileInfo_o *, const MethodInfo *))v16->klass->vtable._9_get_Name.methodPtr)(
                                         v16,
                                         v16->klass->vtable._9_get_Name.method);
              v18 = v17;
              if ( !v17 )
                sub_1C372B4(0);
              v34[0] = System_String__get_Chars(v17, 0, 0);
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v13 = System_Char__Equals_64626068((uint16_t)v34, 0x2Eu, 0);
              if ( !v13 )
              {
                v34[0] = System_String__get_Chars(v18, 0, 0);
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v13 = System_Char__Equals_64626068((uint16_t)v34, 0x5Fu, 0);
                if ( !v13 )
                {
                  if ( !v12 )
                    sub_1C372B4(v13);
                  items = v12->fields._items;
                  v22 = Method_System_Collections_Generic_List_string__Add__;
                  ++v12->fields._version;
                  if ( !items )
                    sub_1C372B4(v13);
                  size = v12->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v12,
                      (Il2CppObject *)v18,
                      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v24 = &items->obj.klass + size;
                    v12->fields._size = size + 1;
                    v24[4] = (Il2CppClass *)v18;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v18, v19, v20);
                  }
                }
              }
              max_length = Files_64426080->max_length;
            }
          }
          if ( !v12 )
            sub_1C372B4(v13);
          v25 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                                v12,
                                                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
          this->fields.scriptFileList = v25;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.scriptFileList, (int32_t)v25, v26, v27);
        }
        else
        {
          v5 = System_String__Concat_63599904(
                 (System_String_o *)StringLiteral_22294/*"not find directory ["*/,
                 v8,
                 (System_String_o *)StringLiteral_16058/*"]"*/,
                 0);
        }
        if ( System_String__IsNullOrEmpty(v5, 0) )
        {
          listViewManager = (System_String_o *)this->fields.listViewManager;
          if ( listViewManager )
          {
            ScriptConnectListViewManager__CreateList(
              (ScriptConnectListViewManager_o *)listViewManager,
              this->fields.scriptFileList,
              v28);
            ScriptConnectListViewMenu__StartInput(this, v29);
            LOBYTE(listViewManager) = 1;
            return (char)listViewManager;
          }
        }
        else
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v31 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v31,
            (Il2CppObject *)this,
            Method_ScriptConnectListViewMenu_OnClickErrorDialog__,
            0);
          if ( Instance )
          {
            *(_QWORD *)&effectDistance.fields.hasValue = 0;
            effectDistance.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_4660/*"Connect Script Error"*/,
              v5,
              v31,
              1,
              0,
              -1.0,
              1,
              effectDistance,
              0);
            LOBYTE(listViewManager) = 0;
            return (char)listViewManager;
          }
        }
      }
    }
    sub_1C372B4(listViewManager);
  }
  return (char)listViewManager;
}


void ScriptConnectListViewMenu__StartInput(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  ScriptConnectListViewManager_o *listViewManager; // x20
  ScriptConnectListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  UnityEngine_Behaviour_o *scriptTestObjectCancelButton; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4C4057E & 1) == 0 )
  {
    sub_1C37058(&ScriptConnectListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_ScriptConnectListViewMenu_OnClickItem__);
    byte_4C4057E = 1;
  }
  this->fields.state = 3;
  listViewManager = this->fields.listViewManager;
  v4 = (ScriptConnectListViewManager_CallbackFunc_o *)sub_1C372A4(ScriptConnectListViewManager_CallbackFunc_TypeInfo);
  ScriptConnectListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ScriptConnectListViewMenu_OnClickItem__,
    v5);
  if ( !listViewManager
    || (ScriptConnectListViewManager__SetMode_37436236(listViewManager, 1, v4, v7),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectCancelButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectUpdateButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.jumpLineObjectInput) == 0) )
  {
    sub_1C372B4(scriptTestObjectCancelButton);
  }
  UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectCancelButton, 1, 0);
}


void ScriptConnectListViewMenu__add_callbackFunc(
        ScriptConnectListViewMenu_o *this,
        ScriptConnectListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptConnectListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptConnectListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptConnectListViewMenu_o *v11; // x0
  ScriptConnectListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C4057A & 1) == 0 )
  {
    sub_1C37058(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo);
    byte_4C4057A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptConnectListViewMenu_CallbackFunc_c *)v8->klass != ScriptConnectListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  ScriptConnectListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void ScriptConnectListViewMenu__remove_callbackFunc(
        ScriptConnectListViewMenu_o *this,
        ScriptConnectListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptConnectListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptConnectListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptConnectListViewMenu_o *v11; // x0
  System_String_o *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  ScriptConnectListViewMenu_CallbackFunc_o *v15; // x4
  const MethodInfo *v16; // x5

  if ( (byte_4C4057B & 1) == 0 )
  {
    sub_1C37058(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo);
    byte_4C4057B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptConnectListViewMenu_CallbackFunc_c *)v8->klass != ScriptConnectListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  ScriptConnectListViewMenu__Open(v11, v12, v13, v14, v15, v16);
}


void ScriptConnectListViewMenu_CallbackFunc___ctor(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A78B14;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A78ABC;
}


System_IAsyncResult_o *ScriptConnectListViewMenu_CallbackFunc__BeginInvoke(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  if ( (byte_4C4057F & 1) == 0 )
  {
    sub_1C37058(&ScriptConnectListViewMenu_ResultKind_TypeInfo);
    byte_4C4057F = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             ScriptConnectListViewMenu_ResultKind_TypeInfo,
             &v14,
             objectName,
             callback,
             object,
             method,
             v6,
             v7);
  v13[1] = objectName;
  return (System_IAsyncResult_o *)sub_1C3700C(this, v13, callback, object);
}


void ScriptConnectListViewMenu_CallbackFunc__EndInvoke(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void ScriptConnectListViewMenu_CallbackFunc__Invoke(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
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