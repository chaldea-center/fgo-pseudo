void __fastcall ScriptConnectListViewMenu___ctor(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptConnectListViewMenu__Callback(
        ScriptConnectListViewMenu_o *this,
        int32_t result,
        System_String_o *objectName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ScriptConnectListViewMenu_CallbackFunc_o *v9; // x21
  struct ScriptConnectListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C21DDC(p_callbackFunc, 0LL, (int64_t)objectName, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_String_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      objectName,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ScriptConnectListViewMenu__Close(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  ListViewManager_o *listViewManager; // x0
  PartyOrganizationUtility_o *p_scriptFileList; // x0

  ScriptConnectListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    ListViewManager__DestroyList(listViewManager, 0LL);
    this->fields.state = 0;
  }
  p_scriptFileList = (PartyOrganizationUtility_o *)&this->fields.scriptFileList;
  if ( this->fields.scriptFileList )
  {
    p_scriptFileList->klass = 0LL;
    sub_1C21DDC(p_scriptFileList, 0LL, v4, v5, v6, v7, v8, v9);
  }
  listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectRootObject;
  if ( !listViewManager )
LABEL_8:
    sub_1C22094(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0LL);
}


void __fastcall ScriptConnectListViewMenu__EndInput(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
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
      sub_1C22094(listViewManager, method);
    }
    UILineInput__SetInputEnable((UILineInput_o *)listViewManager, 0, 0LL);
  }
}


int32_t __fastcall ScriptConnectListViewMenu__GetJumpLine(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1C22094(0LL, method);
  Text = UILineInput__GetText(jumpLineObjectInput, 0LL);
  if ( System_String__IsNullOrEmpty(Text, 0LL) )
    return -1;
  else
    return System_Int32__Parse(Text, 0LL);
}


System_String_o *__fastcall ScriptConnectListViewMenu__GetJumpLineString(
        ScriptConnectListViewMenu_o *this,
        const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1C22094(0LL, method);
  return UILineInput__GetText(jumpLineObjectInput, 0LL);
}


void __fastcall ScriptConnectListViewMenu__OnClickCancel(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.state == 3 )
  {
    this->fields.state = 5;
    ScriptConnectListViewMenu__EndInput(this, method);
    ScriptConnectListViewMenu__Callback(this, 1, 0LL, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptConnectListViewMenu__OnClickErrorDialog(
        ScriptConnectListViewMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  this->fields.state = 5;
  ScriptConnectListViewMenu__EndInput(this, (const MethodInfo *)isDecide);
  ScriptConnectListViewMenu__Callback(this, 1, 0LL, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptConnectListViewMenu__OnClickItem(
        ScriptConnectListViewMenu_o *this,
        int32_t result,
        ScriptConnectListViewItem_o *item,
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
      ScriptConnectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        v10 = 3;
        goto LABEL_9;
      }
LABEL_10:
      sub_1C22094(v6, v7);
    }
    if ( result == 2 )
    {
      this->fields.state = 5;
      ScriptConnectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        v10 = (unsigned int)&dword_0 + 2;
LABEL_9:
        ScriptConnectListViewMenu__Callback(this, v10, path, v8);
        return;
      }
      goto LABEL_10;
    }
  }
}


void __fastcall ScriptConnectListViewMenu__OnClickUpdate(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x2

  if ( this->fields.state == 3 )
  {
    this->fields.state = 1;
    ScriptConnectListViewMenu__EndInput(this, method);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_1C22094(0LL, v3);
    ListViewManager__DestroyList(listViewManager, 0LL);
    this->fields.scriptFileList = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.scriptFileList, 0LL, v5, v6, v7, v8, v9, v10);
    ScriptConnectListViewMenu__RequestList(this, this->fields.path, v11);
  }
}


void __fastcall ScriptConnectListViewMenu__Open(
        ScriptConnectListViewMenu_o *this,
        System_String_o *path,
        System_String_o *objectName,
        System_String_o *jumpLine,
        ScriptConnectListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t state; // w8
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  UnityEngine_GameObject_o *scriptTestObjectRootObject; // x0
  struct System_String_o *v21; // x8
  int stringLength; // w9
  UILabel_o *scriptTestDefaultNameLabel; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1

  if ( (byte_4BD9C7E & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIInput___);
    byte_4BD9C7E = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 6:
      goto LABEL_6;
    case 5:
      this->fields.callbackFunc = callback;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        (int64_t)objectName,
        (int32_t)jumpLine,
        (System_String_o *)callback,
        (BattleSetupInfo_o *)method,
        v6,
        v7);
      ScriptConnectListViewMenu__StartInput(this, v31);
      return;
    case 0:
LABEL_6:
      this->fields.path = path;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.path,
        (int64_t)path,
        (int64_t)objectName,
        (int32_t)jumpLine,
        (System_String_o *)callback,
        (BattleSetupInfo_o *)method,
        v6,
        v7);
      this->fields.callbackFunc = callback;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
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
                                                                   0LL);
        v21 = (struct System_String_o *)scriptTestObjectRootObject;
      }
      if ( !scriptTestDefaultNameLabel
        || (UILabel__set_text(scriptTestDefaultNameLabel, v21, 0LL),
            (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput) == 0LL)
        || (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)scriptTestObjectRootObject,
                                                                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL )
      {
LABEL_20:
        sub_1C22094(scriptTestObjectRootObject, v19);
      }
      UIInput__set_value((UIInput_o *)scriptTestObjectRootObject, jumpLine, 0LL);
      this->fields.state = 1;
      this->fields.scriptFileList = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.scriptFileList, 0LL, v24, v25, v26, v27, v28, v29);
      ScriptConnectListViewMenu__RequestList(this, this->fields.path, v30);
      break;
  }
}


bool __fastcall ScriptConnectListViewMenu__RequestList(
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
  System_IO_FileInfo_array *Files_63303832; // x21
  System_Collections_Generic_List_object__o *v14; // x22
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int max_length; // w8
  int i; // w24
  System_IO_FileInfo_o *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  struct System_String_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x1
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v43; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  __int16 v46[2]; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4BD9C7F & 1) == 0 )
  {
    sub_1C21E38(&char_TypeInfo);
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&System_IO_DirectoryInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Method_ScriptConnectListViewMenu_OnClickErrorDialog__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_19753/*"file://"*/);
    sub_1C21E38(&StringLiteral_22541/*"not find directory ["*/);
    sub_1C21E38(&StringLiteral_4784/*"Connect Script Error"*/);
    sub_1C21E38(&StringLiteral_19754/*"file:///"*/);
    sub_1C21E38(&StringLiteral_854/*"*.txt"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BD9C7F = 1;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v46[0] = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0LL);
  listViewManager = 0LL;
  if ( !IsNullOrEmpty )
  {
    if ( path )
    {
      listViewManager = System_String__Replace_63135104(
                          path,
                          (System_String_o *)StringLiteral_19754/*"file:///"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
      if ( listViewManager )
      {
        v9 = System_String__Replace_63135104(
               listViewManager,
               (System_String_o *)StringLiteral_19753/*"file://"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
        if ( System_IO_Directory__Exists(v9, 0LL) )
        {
          v10 = (System_IO_DirectoryInfo_o *)sub_1C22084(System_IO_DirectoryInfo_TypeInfo);
          System_IO_DirectoryInfo___ctor(v10, v9, 0LL);
          if ( !v10 )
            sub_1C22094(v11, v12);
          Files_63303832 = System_IO_DirectoryInfo__GetFiles_63303832(v10, (System_String_o *)StringLiteral_854/*"*.txt"*/, 0LL);
          v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v14,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !Files_63303832 )
            sub_1C22094(v15, v16);
          max_length = Files_63303832->max_length;
          if ( max_length >= 1 )
          {
            for ( i = 0; i < max_length; ++i )
            {
              if ( i >= (unsigned int)max_length )
                sub_1C2209C(v15, v16);
              v19 = Files_63303832->m_Items[i];
              if ( !v19 )
                sub_1C22094(0LL, v16);
              v20 = (System_String_o *)((__int64 (__fastcall *)(System_IO_FileInfo_o *, Il2CppMethodPointer))v19->klass->vtable._9_get_Name.method)(
                                         v19,
                                         v19->klass->vtable._10_get_Exists.methodPtr);
              v22 = v20;
              if ( !v20 )
                sub_1C22094(0LL, v21);
              v46[0] = System_String__get_Chars(v20, 0, 0LL);
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v15 = System_Char__Equals_63747440((uint16_t)v46, 0x2Eu, 0LL);
              if ( !v15 )
              {
                v46[0] = System_String__get_Chars(v22, 0, 0LL);
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v15 = System_Char__Equals_63747440((uint16_t)v46, 0x5Fu, 0LL);
                if ( !v15 )
                {
                  if ( !v14 )
                    sub_1C22094(v15, v16);
                  items = v14->fields._items;
                  v30 = Method_System_Collections_Generic_List_string__Add__;
                  ++v14->fields._version;
                  if ( !items )
                    sub_1C22094(v15, v16);
                  size = v14->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v14,
                      (Il2CppObject *)v22,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v32 = &items->obj.klass + size;
                    v14->fields._size = size + 1;
                    v32[4] = (Il2CppClass *)v22;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v22, v23, v24, v25, v26, v27, v28);
                  }
                }
              }
              max_length = Files_63303832->max_length;
            }
          }
          if ( !v14 )
            sub_1C22094(v15, v16);
          v33 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                                v14,
                                                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
          this->fields.scriptFileList = v33;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.scriptFileList,
            (int64_t)v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
        }
        else
        {
          v5 = System_String__Concat_63126736(
                 (System_String_o *)StringLiteral_22541/*"not find directory ["*/,
                 v9,
                 (System_String_o *)StringLiteral_16345/*"]"*/,
                 0LL);
        }
        if ( System_String__IsNullOrEmpty(v5, 0LL) )
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v43 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v43,
            (Il2CppObject *)this,
            Method_ScriptConnectListViewMenu_OnClickErrorDialog__,
            0LL);
          if ( Instance )
          {
            *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
            effectDistance.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_4784/*"Connect Script Error"*/,
              v5,
              v43,
              1,
              0,
              -1.0,
              1,
              effectDistance,
              0LL);
            LOBYTE(listViewManager) = 0;
            return (char)listViewManager;
          }
        }
      }
    }
    sub_1C22094(listViewManager, v6);
  }
  return (char)listViewManager;
}


void __fastcall ScriptConnectListViewMenu__StartInput(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  ScriptConnectListViewManager_o *listViewManager; // x20
  ScriptConnectListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  UnityEngine_Behaviour_o *scriptTestObjectCancelButton; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BD9C80 & 1) == 0 )
  {
    sub_1C21E38(&ScriptConnectListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ScriptConnectListViewMenu_OnClickItem__);
    byte_4BD9C80 = 1;
  }
  this->fields.state = 3;
  listViewManager = this->fields.listViewManager;
  v4 = (ScriptConnectListViewManager_CallbackFunc_o *)sub_1C22084(ScriptConnectListViewManager_CallbackFunc_TypeInfo);
  ScriptConnectListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ScriptConnectListViewMenu_OnClickItem__,
    v5);
  if ( !listViewManager
    || (ScriptConnectListViewManager__SetMode_36032236(listViewManager, 1, v4, v8),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectCancelButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0LL),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectUpdateButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0LL),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.jumpLineObjectInput) == 0LL) )
  {
    sub_1C22094(scriptTestObjectCancelButton, v7);
  }
  UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectCancelButton, 1, 0LL);
}


void __fastcall ScriptConnectListViewMenu__add_callbackFunc(
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

  if ( (byte_4BD9C7C & 1) == 0 )
  {
    sub_1C21E38(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo);
    byte_4BD9C7C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptConnectListViewMenu_CallbackFunc_c *)v8->klass != ScriptConnectListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
  ScriptConnectListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptConnectListViewMenu__remove_callbackFunc(
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

  if ( (byte_4BD9C7D & 1) == 0 )
  {
    sub_1C21E38(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo);
    byte_4BD9C7D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptConnectListViewMenu_CallbackFunc_c *)v8->klass != ScriptConnectListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
  ScriptConnectListViewMenu__Open(v11, v12, v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptConnectListViewMenu_CallbackFunc___ctor(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
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
  sub_1C21DDC(
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
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A60474;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A6041C;
}


System_IAsyncResult_o *__fastcall ScriptConnectListViewMenu_CallbackFunc__BeginInvoke(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_4BD9C81 & 1) == 0 )
  {
    sub_1C21E38(&ScriptConnectListViewMenu_ResultKind_TypeInfo);
    byte_4BD9C81 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ScriptConnectListViewMenu_ResultKind_TypeInfo, &v12, objectName, callback, object);
  v11[1] = (__int64)objectName;
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v11, callback, object);
}


void __fastcall ScriptConnectListViewMenu_CallbackFunc__EndInvoke(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
}


void __fastcall ScriptConnectListViewMenu_CallbackFunc__Invoke(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
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