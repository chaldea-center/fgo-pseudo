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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ScriptConnectListViewMenu_CallbackFunc_o *v9; // x21
  struct ScriptConnectListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, (int32_t)objectName, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, System_String_o *, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      objectName,
      v9->fields.method);
  }
}


void ScriptConnectListViewMenu__Close(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  ListViewManager_o *listViewManager; // x0
  GrandQuestFolderBoardItem_o *p_scriptFileList; // x0

  ScriptConnectListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.state = 0;
  }
  p_scriptFileList = (GrandQuestFolderBoardItem_o *)&this->fields.scriptFileList;
  if ( this->fields.scriptFileList )
  {
    p_scriptFileList->klass = 0;
    sub_1C7BA8C(p_scriptFileList, 0, v4, v5, v6, v7, v8, v9);
  }
  listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectRootObject;
  if ( !listViewManager )
LABEL_8:
    sub_1C7BD40(listViewManager, v3);
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
      sub_1C7BD40(listViewManager, method);
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
    sub_1C7BD40(0, method);
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
    sub_1C7BD40(0, method);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *path; // x2
  char *v10; // x1

  if ( this->fields.state == 3 )
  {
    if ( result == 3 )
    {
      this->fields.state = 5;
      ScriptConnectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        LODWORD(v10) = 3;
        goto LABEL_9;
      }
LABEL_10:
      sub_1C7BD40(v6, v7);
    }
    if ( result == 2 )
    {
      this->fields.state = 5;
      ScriptConnectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        v10 = (char *)&dword_0 + 2;
LABEL_9:
        ScriptConnectListViewMenu__Callback(this, (int32_t)v10, path, v8);
        return;
      }
      goto LABEL_10;
    }
  }
}


void ScriptConnectListViewMenu__OnClickUpdate(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x2

  if ( this->fields.state == 3 )
  {
    this->fields.state = 1;
    ScriptConnectListViewMenu__EndInput(this, method);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_1C7BD40(0, v3);
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.scriptFileList = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.scriptFileList, 0, v5, v6, v7, v8, v9, v10);
    ScriptConnectListViewMenu__RequestList(this, this->fields.path, v11);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t state; // w8
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x1
  UnityEngine_GameObject_o *scriptTestObjectRootObject; // x0
  struct System_String_o *v21; // x8
  int stringLength; // w9
  UILabel_o *scriptTestDefaultNameLabel; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1

  if ( (byte_4CEBC36 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIInput___);
    byte_4CEBC36 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 6:
      goto LABEL_6;
    case 5:
      this->fields.callbackFunc = callback;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)objectName,
        (int32_t)jumpLine,
        (System_String_o *)callback,
        (int32_t)method,
        v6,
        v7);
      ScriptConnectListViewMenu__StartInput(this, v31);
      return;
    case 0:
LABEL_6:
      this->fields.path = path;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.path,
        (int32_t)path,
        (int32_t)objectName,
        (int32_t)jumpLine,
        (System_String_o *)callback,
        (int32_t)method,
        v6,
        v7);
      this->fields.callbackFunc = callback;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
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
      v21 = this->fields.path;
      if ( !v21 )
        goto LABEL_20;
      stringLength = v21->fields._stringLength;
      scriptTestDefaultNameLabel = this->fields.scriptTestDefaultNameLabel;
      if ( stringLength >= 31 )
      {
        scriptTestObjectRootObject = (UnityEngine_GameObject_o *)System_String__Substring(
                                                                   this->fields.path,
                                                                   stringLength - 30,
                                                                   0);
        v21 = (struct System_String_o *)scriptTestObjectRootObject;
      }
      if ( !scriptTestDefaultNameLabel
        || (UILabel__set_text(scriptTestDefaultNameLabel, v21, 0),
            (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput) == 0)
        || (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)scriptTestObjectRootObject,
                                                                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0 )
      {
LABEL_20:
        sub_1C7BD40(scriptTestObjectRootObject, v19);
      }
      UIInput__set_value((UIInput_o *)scriptTestObjectRootObject, jumpLine, 0);
      this->fields.state = 1;
      this->fields.scriptFileList = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.scriptFileList, 0, v24, v25, v26, v27, v28, v29);
      ScriptConnectListViewMenu__RequestList(this, this->fields.path, v30);
      break;
  }
}


bool ScriptConnectListViewMenu__RequestList(
        ScriptConnectListViewMenu_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  __int64 v6; // x1
  bool IsNullOrEmpty; // w8
  System_String_o *listViewManager; // x0
  System_String_o *v9; // x21
  System_IO_DirectoryInfo_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_IO_FileInfo_array *Files_65039768; // x21
  System_Collections_Generic_List_object__o *v14; // x22
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int max_length; // w8
  int i; // w24
  System_IO_FileInfo_o *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  struct System_String_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x1
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v43; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  _WORD v46[2]; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4CEBC37 & 1) == 0 )
  {
    sub_1C7BAE8(&char_TypeInfo);
    sub_1C7BAE8(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&System_IO_DirectoryInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&Method_ScriptConnectListViewMenu_OnClickErrorDialog__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&StringLiteral_19593/*"file://"*/);
    sub_1C7BAE8(&StringLiteral_22499/*"not find directory ["*/);
    sub_1C7BAE8(&StringLiteral_4664/*"Connect Script Error"*/);
    sub_1C7BAE8(&StringLiteral_19594/*"file:///"*/);
    sub_1C7BAE8(&StringLiteral_797/*"*.txt"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    byte_4CEBC37 = 1;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v46[0] = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0);
  listViewManager = 0;
  if ( !IsNullOrEmpty )
  {
    if ( path )
    {
      listViewManager = System_String__Replace_64223476(
                          path,
                          (System_String_o *)StringLiteral_19594/*"file:///"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0);
      if ( listViewManager )
      {
        v9 = System_String__Replace_64223476(
               listViewManager,
               (System_String_o *)StringLiteral_19593/*"file://"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( System_IO_Directory__Exists(v9, 0) )
        {
          v10 = (System_IO_DirectoryInfo_o *)sub_1C7BD34(System_IO_DirectoryInfo_TypeInfo);
          System_IO_DirectoryInfo___ctor(v10, v9, 0);
          if ( !v10 )
            sub_1C7BD40(v11, v12);
          Files_65039768 = System_IO_DirectoryInfo__GetFiles_65039768(v10, (System_String_o *)StringLiteral_797/*"*.txt"*/, 0);
          v14 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v14,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !Files_65039768 )
            sub_1C7BD40(v15, v16);
          max_length = Files_65039768->max_length;
          if ( max_length >= 1 )
          {
            for ( i = 0; i < max_length; ++i )
            {
              if ( i >= (unsigned int)max_length )
                sub_1C7BD48(v15);
              v19 = Files_65039768->m_Items[i];
              if ( !v19 )
                sub_1C7BD40(0, v16);
              v20 = (System_String_o *)((__int64 (__fastcall *)(System_IO_FileInfo_o *, const MethodInfo *))v19->klass->vtable._9_get_Name.methodPtr)(
                                         v19,
                                         v19->klass->vtable._9_get_Name.method);
              v22 = v20;
              if ( !v20 )
                sub_1C7BD40(0, v21);
              v46[0] = System_String__get_Chars(v20, 0, 0);
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v15 = System_Char__Equals_65239380((uint16_t)v46, 0x2Eu, 0);
              if ( !v15 )
              {
                v46[0] = System_String__get_Chars(v22, 0, 0);
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v15 = System_Char__Equals_65239380((uint16_t)v46, 0x5Fu, 0);
                if ( !v15 )
                {
                  if ( !v14 )
                    sub_1C7BD40(v15, v16);
                  items = v14->fields._items;
                  v30 = Method_System_Collections_Generic_List_string__Add__;
                  ++v14->fields._version;
                  if ( !items )
                    sub_1C7BD40(v15, v16);
                  size = v14->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v14,
                      (Il2CppObject *)v22,
                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v32 = &items->obj.klass + size;
                    v14->fields._size = size + 1;
                    v32[4] = (Il2CppClass *)v22;
                    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v22, v23, v24, v25, v26, v27, v28);
                  }
                }
              }
              max_length = Files_65039768->max_length;
            }
          }
          if ( !v14 )
            sub_1C7BD40(v15, v16);
          v33 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                                v14,
                                                (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
          this->fields.scriptFileList = v33;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.scriptFileList,
            (int32_t)v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
        }
        else
        {
          v5 = System_String__Concat_64215176(
                 (System_String_o *)StringLiteral_22499/*"not find directory ["*/,
                 v9,
                 (System_String_o *)StringLiteral_16114/*"]"*/,
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
              v40);
            ScriptConnectListViewMenu__StartInput(this, v41);
            LOBYTE(listViewManager) = 1;
            return (char)listViewManager;
          }
        }
        else
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v43 = (ErrorDialog_ClickDelegate_o *)sub_1C7BD34(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v43,
            (Il2CppObject *)this,
            Method_ScriptConnectListViewMenu_OnClickErrorDialog__,
            0);
          if ( Instance )
          {
            *(_QWORD *)&effectDistance.fields.hasValue = 0;
            effectDistance.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_4664/*"Connect Script Error"*/,
              v5,
              v43,
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
    sub_1C7BD40(listViewManager, v6);
  }
  return (char)listViewManager;
}


void ScriptConnectListViewMenu__StartInput(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  ScriptConnectListViewManager_o *listViewManager; // x20
  ScriptConnectListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  UnityEngine_Behaviour_o *scriptTestObjectCancelButton; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4CEBC38 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptConnectListViewManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_ScriptConnectListViewMenu_OnClickItem__);
    byte_4CEBC38 = 1;
  }
  this->fields.state = 3;
  listViewManager = this->fields.listViewManager;
  v4 = (ScriptConnectListViewManager_CallbackFunc_o *)sub_1C7BD34(ScriptConnectListViewManager_CallbackFunc_TypeInfo);
  ScriptConnectListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ScriptConnectListViewMenu_OnClickItem__,
    v5);
  if ( !listViewManager
    || (ScriptConnectListViewManager__SetMode_37979248(listViewManager, 1, v4, v8),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectCancelButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectUpdateButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.jumpLineObjectInput) == 0) )
  {
    sub_1C7BD40(scriptTestObjectCancelButton, v7);
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

  if ( (byte_4CEBC34 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo);
    byte_4CEBC34 = 1;
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
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
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

  if ( (byte_4CEBC35 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo);
    byte_4CEBC35 = 1;
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
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  ScriptConnectListViewMenu__Open(v11, v12, v13, v14, v15, v16);
}


void ScriptConnectListViewMenu_CallbackFunc___ctor(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAE884;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAE82C;
}


System_IAsyncResult_o *ScriptConnectListViewMenu_CallbackFunc__BeginInvoke(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_4CEBC39 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptConnectListViewMenu_ResultKind_TypeInfo);
    byte_4CEBC39 = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(ScriptConnectListViewMenu_ResultKind_TypeInfo, &v12);
  v11[1] = objectName;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v11, callback, object);
}


void ScriptConnectListViewMenu_CallbackFunc__EndInvoke(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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